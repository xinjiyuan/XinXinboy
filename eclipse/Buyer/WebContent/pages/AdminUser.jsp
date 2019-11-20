<%@ page language="java" contentType="text/html; charset=Utf-8" pageEncoding="Utf-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<!-- saved from url=(0096)http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html -->
<html><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    
    <title>尚学堂-后台</title>
    <link rel="stylesheet" href="http://localhost:8081/Buyer/css/style.css">
    <script type="text/javascript" src="http://localhost:8081/Buyer/js/jquery-1.10.2.min.js"></script>
    <script type="text/javascript" src="http://localhost:8081/Buyer/js/chart.js"></script>
    <script type="text/javascript" src="http://localhost:8081/Buyer/js/public.js"></script>
    <script type="text/javascript" src="http://localhost:8081/Buyer/js/index.js"></script>
</head>

<body style="">
    <div class="wrapper">
        <div class="box clearfix">
            <!-- sidebar -->
            <div class="sidebar" id="sidebar">
                <ul class="nav nav-1" id="lg-menu">
                    <li  id="navli1" onclick="setMenu(&#39;navli&#39;, &#39;navul&#39;, 1, 4)">
                        <a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html" class="a-1 icon_home">系统后台</a>
                    </li>
                    <li id="navli2" class="hover" onclick="setMenu(&#39;navli&#39;, &#39;navul&#39;, 2, 4)">
                        <a href="javascript:;" class="a-1 icon_upload">用户信息表</a>
                        <!--<ul class="nav nav-2" id="navul2">
                            <li><a href="#" class="a-2 icon_upload_100">新建计划表</a></li>
                            <li><a href="#" class="a-2 icon_upload_200">计划表审核</a></li>
                        </ul>-->
                    </li>
                    <li id="navli3" onclick="setMenu(&#39;navli&#39;, &#39;navul&#39;, 3, 4)">
                        <a href="javascript:;" class="a-1 icon_peixun">培训列表</a>
                        <ul class="nav nav-2" id="navul3">
                            <li><a href="#" class="a-2 icon_peixun_100">培训计划表</a></li>
                            <li><a href="#" class="a-2 icon_peixun_200">培训成绩表</a></li>
                        </ul>
                    </li>
                    <li id="navli4" onclick="setMenu(&#39;navli&#39;, &#39;&#39;, 4, 4)">
                        <a href="javascript:;" class="a-1 icon_jihe">培訓稽核</a>
                    </li>
                </ul>
            </div>
            <!-- /sidebar -->
            <!-- main right -->
            <div class="content" id="main">
                <div class="navbar-static-top">
                    <a href="#"><img src="http://localhost:8081/Buyer/images/uiz1.png" alt="logo"></a>
                    <div class="fr navbar-right">
                        <span class="marginR15">2018年08月20日  星期一</span>
                        <img src="http://localhost:8081/Buyer/images/tx.png" alt="头像" class="tx marginR15">
                        <span class="marginR30">尚学堂，欢迎您</span>
                        <a href="#" class="exit"></a>
                    </div>
                </div>
                <!-- 占位空白条 -->
                <div style="width:100%;height:65px;padding:0px;margin:0px;">
                </div>
                <!-- 占位空白条结束 -->
                <!-- 用户信息 -->
                <div style="width:100%;height:65px;padding:0px;margin:0px;background-color:red;margin-top:10px;">
                	<div style="float:left; width:30% ;height:65px;background-color:black;"></div>
                	<div style="float:left; width:30% ;height:65px;background-color:black;"></div>
                </div>
                <!-- 用户信息结束 -->
              </div>
            <!-- /main -->
        </div>
    </div>


</body>
</html>