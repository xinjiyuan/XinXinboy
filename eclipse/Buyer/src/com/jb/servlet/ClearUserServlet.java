package com.jb.servlet;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import javax.websocket.Session;

public class ClearUserServlet extends HttpServlet {

	@Override
	protected void service(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
		ServletContext servletContext=getServletContext();
		HttpSession session=req.getSession();
		session.removeAttribute("msg");
		RequestDispatcher dispatcher=servletContext.getRequestDispatcher("/pages/Login.jsp");
		dispatcher.forward(req, res);
	}
		
}
