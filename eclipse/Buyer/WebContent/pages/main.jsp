<%@ page language="java" contentType="text/html; charset=utf-8" pageEncoding="utf-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<link rel = "stylesheet"  href = "http://localhost:8081/Buyer/css/main.css">
<title>视频主页</title>
<link rel="stylesheet" href="https://cdn.staticfile.org/twitter-bootstrap/3.3.7/css/bootstrap.min.css">
<script src="https://cdn.staticfile.org/jquery/2.1.1/jquery.min.js"></script>
<script src="https://cdn.staticfile.org/twitter-bootstrap/3.3.7/js/bootstrap.min.js"></script>
</head>
<body>
<nav class="navbar navbar-default" role="navigation">
  <div class="container-fluid">
    <div class="navbar-header">
     <img class="logo" src="<c:url value='http://localhost:8081/Buyer/images/main_logo.png'/>"/>
    </div>
     <div>
        <ul class="nav navbar-nav">
            <li class="active"><a href="#">尚学堂</a></li>
            <li><a href="#">关于我们</a></li>
        </ul>
    </div>
    <ul class="nav navbar-nav navbar-right">
    <c:choose>
			<c:when test="${skip}">
				<li><a href="#"><span class="glyphicon glyphicon-user"></span> ${msg}</a></li>
			</c:when>
			<c:otherwise>
				<li><a href="<c:url value='Login.jsp'/>"><span class="glyphicon glyphicon-user"></span> 注册</a></li>
      			<li><a href="<c:url value='Login.jsp'/>"><span class="glyphicon glyphicon-log-in"></span> 登录</a></li>
			</c:otherwise>
		</c:choose>
    </ul>
  </div>
</nav>
</body>
</html>