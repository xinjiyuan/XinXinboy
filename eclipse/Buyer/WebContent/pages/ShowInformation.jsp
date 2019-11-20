<%@ page language="java" contentType="text/html; charset=Utf-8" pageEncoding="Utf-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>

<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Show INFO</title>
</head>
<body>
<style>

		.bookInformation{
			width:100%;
			height:40px;
			background-color:#FFD9EC;
			margin-top:5xp;
			border-bottom:1px solid red;
		}
        .bookInformation div{
        	
        	text-align:center;
        	float:left;
        	height:40px;
        	overflow:hidden;
        }
        .bookleft{width:20%;}
        .bookmiddle{width:10%;}
        .bookright{width:60%;}
</style>
<c:forEach var="books" items="${booklist }" begin="1" end="9">
		<div class="bookInformation">
			<div class="bookleft"><a href="<c:url value='${books.chapter_url}'/>">${books.name}</a></div>
			<div class="bookmiddle">${books.author}</div>
			<div class="bookright">${books.introduction}</div>
		</div>
</c:forEach>

</body>
</html>