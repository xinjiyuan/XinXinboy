<%@ page language="java" contentType="text/html; charset=Utf-8" pageEncoding="Utf-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<!DOCTYPE html>
<html>
<head>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">

    <title>Video</title>
    <link rel="stylesheet" href="https://cdn.staticfile.org/twitter-bootstrap/3.3.7/css/bootstrap.min.css">
    <script src="https://cdn.staticfile.org/jquery/2.1.1/jquery.min.js"></script>
    <script src="https://cdn.staticfile.org/twitter-bootstrap/3.3.7/js/bootstrap.min.js"></script>
    <style>
        .top{
            text-align: center;
            position: absolute;
            top:0px;
            margin: 0px;
            width: 100%;
            height: 100px;
            float: left;
            background-color:whitesmoke;
        }
        .top div{
            background-color: whitesmoke;
            height: 65px;
            width:25%;
            float: left;
            padding-top: 10px;
            padding-left: 30px;
            margin-left: 80px;
            margin-top: 15px
        }
        .top div:hover{
            background-color: lightyellow;
        }
        .left{
            background-color: white;
        }
        .middle{
            background-color: white;
        }
        .right{
            background-color: white;
        }
        canvas{
            position: absolute;
            height: 100%;
            width: 100%;
            left: 0;
            top: 0;
            cursor: crosshair;
            background-color: lightgray;
        }
        .menu{
            position:absolute;
            width:100px;
            height:200px;
            left:100px;
            top:200px;
            padding: 0px;
        }
        .list{
            margin-top: 5px;
            background-color: aliceblue;
            text-align: center;

        }
        .video{
            text-align: center;
            position:absolute;
            width:1053px;
            height: 400px;
            left:250px;
            top:125px;
            padding: 0px;
            margin: 0px;
        }
        .text{
        width:100%;
            height: 400px;
         	padding: 0px;
            margin: 0px;
        }
        .information{
            width: 100%;
            height: 50px;
            text-align: center;
            background-color: lightyellow;
            position: absolute;
            bottom: 0px;
        }
    </style>
</head>
<body>

<!--火球弹射特效-->
<canvas width="980" height="771"></canvas>
<!--火球弹射特效信息结束-->
<!-- 头部信息 -->
<div class="top">
    <div class="left"><a href="<c:url value='http://localhost:8081/Buyer/pages/index.jsp'/>"><img src="http://localhost:8081/Buyer/images/uiz1.png"></a></div>
    <div class="middle">
        <form class="navbar-form navbar-left" role="search">
            <input type="text" class="form-control" placeholder="Search">
            <button type="submit" class="btn btn-default">提交</button>
        </form>
    </div>
    <div class="right">
        <c:choose>
            <c:when test="${skip}">
				 <a href="#"><span class="glyphicon glyphicon-user"></span> ${msg}</a><br>
            	 <a href="<c:url value='http://localhost:8081/Buyer/ClearUser'/>"><img src="http://localhost:8081/Buyer/images/re.png"/> 注销</a>
            </c:when>
            <c:when test="${empty skip}">
				<a href="<c:url value='http://localhost:8081/Buyer/pages/Login.jsp'/>"><span class="glyphicon glyphicon-user"></span> 注册</a><br>
                <a href="<c:url value='http://localhost:8081/Buyer/pages/Login.jsp'/>"><span class="glyphicon glyphicon-log-in"></span> 登录</a>
            </c:when>
            <c:otherwise>
                <a href="<c:url value='http://localhost:8081/Buyer/pages/Login.jsp'/>"><span class="glyphicon glyphicon-user"></span> 注册</a><br>
                <a href="<c:url value='http://localhost:8081/Buyer/pages/Login.jsp'/>"><span class="glyphicon glyphicon-log-in"></span> 登录</a>
            </c:otherwise>
        </c:choose>
    </div>
</div>
<!-- 头部信息结束 -->
<!--视频播放框-->
<div class="video">
    <iframe class="text" src="<c:url value='http://localhost:8081/Buyer/SelectAllBookServlet'/>"></iframe>
</div>
<!--视频播放菜单-->
<div class="menu">
	<c:forEach var="type"   items="${booksType}">
		<div class="list">${type}
		</div>
	</c:forEach>
    
</div>
<!--视频播放菜单结束-->
<!-- 版权声明 -->
<div class="information">
    <p>我们的公司成立于1997年，于危难的105小社区小帘子内部诞生，需要我对整个小information做出整体负责</p>
    <span>© 2016 imoroc.com  京ICP备13042132号</span>
</div>
<!-- 版权声明结束 -->
<script type="text/javascript">

    bgColor = 'lavender';
    gravity = 0.03;
    particleColor = '#f73';

    canvas = document.querySelector('canvas');
    
    ctx = canvas.getContext('2d');
    (onresize = function(){
        width = canvas.width = canvas.clientWidth;
        height = canvas.height = canvas.clientHeight;
        o = {x:Math.floor(width/2),y:Math.floor(height/2)};
        edge = {top:-o.y,right:width-o.x,bottom:height-o.y,left:-o.x}
    })();

    particles = {};
    newParticle = (function(){
        var nextIndex = 0;
        return function(x,y,r,o,c,xv,yv,rv,ov){
            particles[++nextIndex] = {
                index: nextIndex,
                x: x,
                y: y,
                r: r,
                o: o,
                c: c,
                xv: xv,
                yv: yv,
                rv: rv,
                ov: ov
            };
        };
    })();

    fireballs = {};
    newFireball = (function(){
        var nextIndex = 0;
        return function(x,y,xv,yv,life){
            fireballs[++nextIndex] = {
                index: nextIndex,
                x: x,
                y: y,
                xv: xv,
                yv: yv,
                life: life
            };
        };
    })();

    mouse = {x:0,y:0,d:0};
    onmousemove = function(e){
        mouse.x = e.clientX-o.x;
        mouse.y = e.clientY-o.y;
        var dx = mouse.x - pos1.x,
            dy = mouse.y - pos1.y;
        mouse.d = Math.sqrt(dx*dx+dy*dy);
    };

    charging = false;
    pos1 = {x:0,y:0};
    showInstructions = true;
    onmousedown = function(e){
        pos1.x = mouse.x;
        pos1.y = mouse.y;
        charging = true;
        showInstructions = false;
    };

    onmouseup = function(){
        if(charging){
            newFireball(
                mouse.x,
                mouse.y,
                (pos1.x-mouse.x)*0.03,
                (pos1.y-mouse.y)*0.03,
                600
            );
            charging = false;
        }
    };

    time = 0;
    requestAnimationFrame(loop = function(){
        ctx.setTransform(1,0,0,1,0,0);
        ctx.globalCompositeOperation = 'source-over';
        ctx.globalAlpha = 1;
        ctx.fillStyle = bgColor;
        ctx.fillRect(0,0,width,height);

        ctx.translate(o.x,o.y);

        if(charging){
            var c = Math.floor(30+mouse.d/2);
            ctx.strokeStyle = 'rgba('+c+','+c+','+c+',1)';
            ctx.lineWidth = 4;
            ctx.beginPath();
            ctx.moveTo(pos1.x,pos1.y);
            ctx.lineTo(mouse.x,mouse.y);
            ctx.lineCap = 'round';
            ctx.stroke();
        }

        if(showInstructions){
            pos1.x = -70;
            pos1.y = -35;

            if(time<10){
                var x = -70,
                    y = -35,
                    r = 30-time*2,
                    a = time/10;
            }else if(time<80){
                var x = (time-10)*2-70,
                    y = (time-10)-35,
                    r = 10,
                    a = 1;
            }else if(time<90){
                var x = 70,
                    y = 35,
                    r = 10+(time-80)*2,
                    a = 1-(time-80)/10;
            }else if(time<140){
                var x = 70,
                    y = 35,
                    r = 30,
                    a = 0;
            }
            var dx = pos1.x-x,
                dy = pos1.y-y,
                d = Math.sqrt(dx*dx+dy*dy);
            if(time<80&&time>10){
                ctx.globalCompositeOperation = 'source-over';
                ctx.globalAlpha = 1;
                var c = Math.floor(30+d/2);
                ctx.strokeStyle = 'rgba('+c+','+c+','+c+',1)';
                ctx.lineWidth = 4;
                ctx.beginPath();
                ctx.moveTo(pos1.x,pos1.y);
                ctx.lineTo(x,y);
                ctx.lineCap = 'round';
                ctx.stroke();
            }
            if(time<140){
                ctx.globalCompositeOperation = 'source-over';
                ctx.globalAlpha = a;
                ctx.beginPath();
                ctx.arc(x,y,r,0,Math.PI*2);
                ctx.lineWidth = 2;
                ctx.strokeStyle = '#aaa';
                ctx.stroke();
            }
            if(time==80){
                newFireball(
                    x,
                    y,
                    dx*0.03,
                    dy*0.03,
                    240
                );
            }
            time = (time+1)%180;
        }

        ctx.globalCompositeOperation = 'lighter';
        for(var i in particles){
            var p = particles[i];
            ctx.beginPath();
            ctx.arc(p.x,p.y,p.r,0,Math.PI*2);
            ctx.globalAlpha = p.o;
            ctx.fillStyle = p.c;
            ctx.fill();
        }

        for(var i in particles){
            var p = particles[i];
            p.x += p.xv;
            p.y += p.yv;
            p.r += p.rv;
            p.o += p.ov;
            if(p.r<0)delete particles[p.index];
            if(p.o<0)delete particles[p.index];
        }

        for(var i in fireballs){
            f = fireballs[i];
            var numParticles = Math.sqrt(f.xv*f.xv+f.yv*f.yv)/5;
            if(numParticles<1)numParticles=1;
            var numParticlesInt = Math.ceil(numParticles),
                numParticlesDif = numParticles/numParticlesInt;
            for(var j=0;j<numParticlesInt;j++){
                newParticle(
                    f.x-f.xv*j/numParticlesInt,
                    f.y-f.yv*j/numParticlesInt,
                    7,
                    numParticlesDif,
                    particleColor,
                    Math.random()*0.6-0.3,
                    Math.random()*0.6-0.3,
                    -0.3,
                    -0.05*numParticlesDif
                );
            }
            f.x += f.xv;
            f.y += f.yv;
            f.yv += gravity;
            var boundary;
            if(f.y<(boundary = edge.top+7)){
                f.y = boundary;
                f.yv *= -1;
            }else if(f.y>(boundary = edge.bottom-7)){
                f.y = boundary;
                f.yv *= -1;
            }
            if(f.x>(boundary = edge.right-7)){
                f.x = boundary;
                f.xv *= -1;
            }else if(f.x<(boundary = edge.left+7)){
                f.x = boundary;
                f.xv *= -1;
            }
            if(--f.life<0)delete fireballs[f.index];
        }

        requestAnimationFrame(loop);
    });
</script>
</body>
</html>