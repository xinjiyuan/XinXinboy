<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<script type="text/javascript" src="http://localhost:8081/Test/js/jquery-3.4.1.js"></script>
</head>
<body>
	<form action="UserServlet" method="post" onsubmit="return checkUser1()">
		<input type="hidden" name="operate" id="operate">
		账号：<input type="text" name="username" id="username"><br>
		密码：<input type="password" name="password" id="password"><br>
		<input type="submit" value="注册">
		<input id="login" type="button" value="登录" onclick="checkUser2()">
	</form>
	
</body>
</html>
<script>
	function checkUser1(){
		var username=$('#username').val();
		var password=$('#password').val();
		if(''==username){
			alert('用户名不能为空！');
			return flase;
		}
		$('#operate').val('register');
		return true;
	}
	function checkUser2(){
		var username=$('#username').val();
		var password=$('#password').val();
		if(''==username){
			alert('用户名不能为空！');
			return false;
		}
		if(''==password){
			alert('密码不能为空！');
			return false;
		}
		$('#operate').val('login');
		$('#form').get(0).action='UserServlet';
		$('#form').get(0).submit();
	}
</script>