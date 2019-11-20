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

public class SelectUserServlet extends HttpServlet{

	@Override
	protected void service(HttpServletRequest req, HttpServletResponse rep) throws ServletException, IOException {
		rep.setContentType("text/html charset=utf-8");	
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
		 * 检测账号是否存在
		 */
		UserDaoImpl userDaoImpl=new UserDaoImpl();
		try {
			getUser= userDaoImpl.SelectUser(userInfo);
		} catch (SQLException e) {
			e.printStackTrace();
		}
		/*
		 * 返回信息
		 */
		HttpSession session=req.getSession();
		if(getUser==null)
		{
			session.setAttribute("skip", false);
			req.setAttribute("msg", username+"登录失败");
			dispatcher=servletContext.getRequestDispatcher("/pages/Login.jsp");
		}
		else {
			session.setAttribute("skip", true);
			session.setAttribute("msg", userInfo.getUsername()+"");
			dispatcher=servletContext.getRequestDispatcher("/pages/index.jsp");
		}
		dispatcher.forward(req, rep);
		
	}
	
}
