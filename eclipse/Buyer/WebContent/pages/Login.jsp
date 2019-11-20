<%@ page language="java" contentType="text/html; charset=Utf-8" pageEncoding="Utf-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<!DOCTYPE html>
<html><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
 
<meta http-equiv="Pragma" content="no-cache"> 
<meta http-equiv="Cache-Control" content="no-cache"> 
<meta http-equiv="Expires" content="0"> 
<title>云商城登录</title>
<link href="http://localhost:8081/Buyer/css/login.css" rel="stylesheet" type="text/css">
</head>
<body>

<div class="login_box">
	
      <div class="login_l_img"><img src="http://localhost:8081/Buyer/images/login-img.png"></div>
      <div class="login">
          <div class="login_logo"><a href="#"><img src="http://localhost:8081/Buyer/images/login_logo.png"></a></div>
          <div class="login_name">
               <p>云商城登录<br>${msg }</p>
          </div>
          <form method="post" action="http://localhost:8081/Buyer/SelectUser">
              <input name="username" type="text" value="用户名" onfocus="this.value=&#39;&#39;" onblur="if(this.value==&#39;&#39;){this.value=&#39;用户名&#39;}">
              <span id="password_text" onclick="this.style.display=&#39;none&#39;;document.getElementById(&#39;password&#39;).style.display=&#39;block&#39;;document.getElementById(&#39;password&#39;).focus().select();">密码</span>
				<input name="password" type="password" id="password" style="display:none;" onblur="if(this.value==&#39;&#39;){document.getElementById(&#39;password_text&#39;).style.display=&#39;block&#39;;this.style.display=&#39;none&#39;};">
              <input value="登录" style="width:100%;" type="submit">
          </form>
      </div>
      <div class="copyright">有限公司 版权所有©2016-2018 技术支持：15684166720</div>
      
</div>
</body>
</html>
