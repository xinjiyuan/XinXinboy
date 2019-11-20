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

import com.jb.service.BookService;

/**
 * Servlet implementation class SelectAllBookTypeServlet
 */
@WebServlet("/SelectAllBookTypeServlet")
public class SelectAllBookTypeServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
	@Override
	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		resp.setContentType("text/html UTf-8");
		ServletContext servletContext=getServletContext();
		RequestDispatcher dispatcher=null;
		ArrayList<String> booksType=null;
		BookService bookService=new BookService();
		try {
			booksType=bookService.AllBookType();
		} catch (SQLException e) {
			System.out.println("查询图书类型出现错误");
			e.printStackTrace();
		}
		req.setAttribute("booksType", booksType);
		dispatcher=servletContext.getRequestDispatcher("/pages/vido.jsp");
		dispatcher.forward(req, resp);
		
	}
   
	

}
