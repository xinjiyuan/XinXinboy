package com.jb.servlet;

import java.io.IOException;
import java.sql.SQLException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.jb.bean.UserInfo;
import com.jb.daoImpl.UserDaoImpl;
import com.jb.service.UserService;

public class AddUserServlet extends HttpServlet {

	@Override
	protected void service(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
		res.setContentType("text/html charset=utf-8");	
		UserInfo getUser=null;
		RequestDispatcher dispatcher=null;
		ServletContext servletContext=getServletContext();
		/*
		 * 获取提交的账号和密码
		 */
		String username=req.getParameter("username");
		String password=req.getParameter("password");
		UserInfo userInfo=new UserInfo(username, password);
		/*
		 * 添加账号
		 */
		UserDaoImpl userDaoImpl=new UserDaoImpl();
		try {
			userDaoImpl.AddUser(userInfo);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		/*
		 * 返回信息
		 */
		HttpSession session=req.getSession();
		req.setAttribute("res", "注册成功");
		dispatcher=servletContext.getRequestDispatcher("/pages/Login.jsp");
		dispatcher.forward(req, res);	
	}

}
