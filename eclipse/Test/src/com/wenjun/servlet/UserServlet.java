package com.wenjun.servlet;

import java.io.IOException;

import javax.imageio.IIOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.xml.ws.Response;

import com.wenjun.biz.UserBiz;
import com.wenjun.biz.impl.UserBizImpl;
import com.wenjun.entity.User;

import sun.security.util.Password;

@WebServlet("/UserServlet")
public class UserServlet extends HttpServlet{
	private static final long serialVersionUID = 1L;
	
	protected void doPost(HttpServletRequest request, 
			HttpServletResponse response) throws ServletException,IOException{
		UserBiz userBiz = new UserBizImpl();
		String username = request.getParameter("username");
		String password = request.getParameter("password");
		String operate = request.getParameter("operate");
		if(null == username || null == password || null == operate)
			response.sendRedirect("index.jsp");
		switch(operate) {
			case "register" :
				Boolean b = userBiz.register(username, password);
				if(b) {
					request.getRequestDispatcher("success.jsp").forward(request, response);
				}else {
					response.sendRedirect("index.jsp");
				}
				break;
			case "login":
				User user = userBiz.login(username, password);
				if(null != user) {
					request.setAttribute("username", user.getUsername());
					request.getRequestDispatcher("success.jsp").forward(request, response);
					
				}else {
					response.sendRedirect("index.jsp");
				}
				break;
			default:
				response.sendRedirect("index.jsp");
				break;
		}
	}

}
