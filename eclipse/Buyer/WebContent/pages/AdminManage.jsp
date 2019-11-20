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
                    <li class="hover" id="navli1" onclick="setMenu(&#39;navli&#39;, &#39;navul&#39;, 1, 4)">
                        <a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html" class="a-1 icon_home">系统后台</a>
                    </li>
                    <li id="navli2" onclick="setMenu(&#39;navli&#39;, &#39;navul&#39;, 2, 4)">
                        <a href="javascript:;" class="a-1 icon_upload">上传计划表</a>
                        <!--<ul class="nav nav-2" id="navul2">
                            <li><a href="#" class="a-2 icon_upload_100">新建计划表</a></li>
                            <li><a href="#" class="a-2 icon_upload_200">计划表审核</a></li>
                        </ul>-->
                    </li>
                    <li id="navli3" onclick="setMenu(&#39;navli&#39;, &#39;navul&#39;, 3, 4)">
                        <a href="javascript:;" class="a-1 icon_peixun">培训列表</a>
                        <ul class="nav nav-2" id="navul3">
                            <li><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/peixunlist.html" class="a-2 icon_peixun_100">培训计划表</a></li>
                            <li><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/scorelist.html" class="a-2 icon_peixun_200">培训成绩表</a></li>
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
                        <a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html" class="exit"></a>
                    </div>
                </div>
                <div class="paddingTRBL40 content_right">
                    <h2 class="fontw color-333333 paddingB20 paddingT20">财务部</h2>
                    <div class="">
                        <span class="font16 color-333333 fontw">今日课程&nbsp;&nbsp;<a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#" class="color-blue font12 fontw-no">更多&gt;&gt;</a></span>
                        <div class="i_box clearfix">
                            <div class="fl i_fl">
                                <div class="i_item i_item_1 hover clearfix">
                                    <div class="i_con">
                                        <div class="font16 txt">待上课</div>
                                        <div class="desc">全屋定制的入门基础/平面</div>
                                    </div>
                                    <div class="i_bottom clearfix">
                                        <div class="fl i_desc">地址：会议室</div>
                                        <div class="fr i_desc">培训时间：10:00-12:00 </div>
                                    </div>
                                </div>
                            </div>
                            <div class="fl i_fl">
                                <div class="i_item i_item_2 clearfix">
                                    <div class="i_con">
                                        <div class="font16 txt">待上课</div>
                                        <div class="desc">全屋定制的入门基础/平面</div>
                                    </div>
                                    <div class="i_bottom clearfix">
                                        <div class="fl i_desc">地址：会议室</div>
                                        <div class="fr i_desc">培训时间：10:00-12:00 </div>
                                    </div>
                                </div>
                            </div>
                            <div class="fl i_fl">
                                <div class="i_item i_item_3 clearfix">
                                    <div class="i_con">
                                        <div class="font16 txt">待上课</div>
                                        <div class="desc">全屋定制的入门基础/平面</div>
                                    </div>
                                    <div class="i_bottom clearfix">
                                        <div class="fl i_desc">地址：会议室</div>
                                        <div class="fr i_desc">培训时间：10:00-12:00 </div>
                                    </div>
                                </div>
                            </div>
                            <div class="fl i_fl">
                                <div class="i_item i_item_4 clearfix">
                                    <div class="i_con">
                                        <div class="font16 txt">已结束</div>
                                        <div class="desc">全屋定制的入门基础/平面</div>
                                    </div>
                                    <div class="i_bottom clearfix">
                                        <div class="fl i_desc">地址：会议室</div>
                                        <div class="fr i_desc">培训时间：10:00-12:00 </div>
                                    </div>
                                </div>
                            </div>
                            <div class="fl i_fl">
                                <div class="i_item i_item_5 clearfix">
                                    <div class="i_con">
                                        <div class="font16 txt">已结束</div>
                                        <div class="desc">全屋定制的入门基础/平面</div>
                                    </div>
                                    <div class="i_bottom clearfix">
                                        <div class="fl i_desc">地址：会议室</div>
                                        <div class="fr i_desc">培训时间：10:00-12:00 </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                        <div class="i_box_2">
                            <div class="fl i_fl i_fl_1">
                                <div class="font16 color-333333 fontw marginB32">8月培训课程进展表&nbsp;&nbsp;<a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#" class="color-blue font12 fontw-no">更多&gt;&gt;</a></div>
                                <div class="i_item clearfix">
                                    <table class="table">
                                        <thead>
                                            <tr>
                                                <th style="width:10%">日期</th>
                                                <th style="width:15%">课程进度</th>
                                                <th style="width:25%">培训课题</th>
                                                <th style="width:10%">日期</th>
                                                <th style="width:15%">课程进度</th>
                                                <th style="width:25%">培训课题</th>
                                            </tr>
                                        </thead>
                                        <tbody>
                                            <tr>
                                                <td>08-01</td>
                                                <td>未完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                                <td>08-01</td>
                                                <td>完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td>08-01</td>
                                                <td>完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                                <td>08-01</td>
                                                <td class="color-green">待完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td>08-01</td>
                                                <td>完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                                <td>08-01</td>
                                                <td class="color-green">待完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td>08-01</td>
                                                <td>完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                                <td>08-01</td>
                                                <td class="color-green">待完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td>08-01</td>
                                                <td class="color-red">完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                                <td>08-01</td>
                                                <td class="color-green">待完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td>08-01</td>
                                                <td>完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                                <td>08-01</td>
                                                <td class="color-green">待完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td>08-01</td>
                                                <td>完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                                <td>08-01</td>
                                                <td class="color-green">待完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td>08-01</td>
                                                <td>完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                                <td>08-01</td>
                                                <td class="color-green">待完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td>08-01</td>
                                                <td>完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                                <td>08-01</td>
                                                <td class="color-green">待完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td>08-01</td>
                                                <td>完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                                <td>08-01</td>
                                                <td class="color-green">待完成</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                        </tbody>
                                    </table>
                                </div>
                            </div>
                            <div class="fl i_fl i_fl_2">
                                <div class="font16 color-333333 fontw marginB32">培训课程审核&nbsp;&nbsp;<a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#" class="color-blue font12 fontw-no">更多&gt;&gt;</a></div>
                                <div class="i_item clearfix">
                                    <table class="table">
                                        <thead>
                                            <tr>
                                                <th style="width:30%">审核状态</th>
                                                <th style="width:70%">课题</th>
                                            </tr>
                                        </thead>
                                        <tbody>
                                            <tr>
                                                <td class="color-red">退回</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td class="color-red">退回</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td class="color-red">退回</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td class="color-red">退回</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td class="color-red">退回</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td class="color-red">修改退回</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td class="color-orange">待审核</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td class="color-orange">待审核</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td class="color-orange">待审核</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                            <tr>
                                                <td class="color-orange">修改审核</td>
                                                <td><a href="http://www.17sucai.com/preview/122757/2019-02-12/%E6%B6%A6%E5%B9%B4%E5%90%8D%E5%93%81/index.html#">企业文化、公司组织架构</a></td>
                                            </tr>
                                        </tbody>
                                    </table>
                                </div>
                            </div>
                            <div class="fl i_fl i_fl_3">
                                <div class="marginB32">&nbsp;</div>
                                <div class="i_item i_item_top clearfix">
                                    <div class="color-black font16 i_bg">当月课程目前完成进度</div>
                                    <div class="i_tu clearfix">
                                        <div class="chart"> <canvas id="canvas" width="178" height="178"></canvas></div>
                                    </div>
                                    <div class="text-ov">部门：财务部</div>
                                    <div class="text-ov">时间2018-08——目前</div>
                                </div>
                                <div class="i_item i_item_bottom i_item_4 clearfix marginT20">
                                    <div class="score"><span id="score">4.02</span>分</div>
                                    <div class="title font16 color-333333 fontw">7月培训财务部培训课程成绩</div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
            <!-- /main -->
        </div>
    </div>


</body>
</html>