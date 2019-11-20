package com.jb.servlet;

import java.io.IOException;
import java.sql.SQLException;
import java.util.ArrayList;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.jb.bean.BookInfo;
import com.jb.service.BookService;

/**
 * Servlet implementation class SelectAllBookServlet
 */
@WebServlet("/SelectAllBookServlet")
public class SelectAllBookServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
	@Override
	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html UTF-8");
		/*
		 * 设置转发
		 */
		RequestDispatcher dispatcher=null;
		ServletContext servletContext=getServletContext();
		/*
		 * 获取图书信息
		 */
		BookService bookService=new BookService();
		ArrayList<BookInfo> books=null;
		try {
			books=bookService.AllBook();
			System.out.println(books.get(1).getId());
		} catch (SQLException e) {
			System.out.println("图书查询出现错误");
			e.printStackTrace();
		}
		req.setAttribute("booklist", books);
		dispatcher=servletContext.getRequestDispatcher("/pages/ShowInformation.jsp");
		dispatcher.forward(req, resp);
	
	}

}
