package com.jb.service;

import java.sql.SQLException;
import java.util.ArrayList;

import com.jb.bean.BookInfo;
import com.jb.daoImpl.BookDaoImpl;

public class BookService {
	/*
	 * 查询所有图书
	 */
	public ArrayList<BookInfo> AllBook() throws SQLException {
		//查询结果集合
		ArrayList<BookInfo> books=null;
		//查询接口
		BookDaoImpl bookDaoImpl=new BookDaoImpl();
		books=bookDaoImpl.SelectAllBook();
		return books;
	}
	/*
	 * 查询所有的图书类型
	 */
	public ArrayList<String> AllBookType() throws SQLException {
		//查询结果集合
		ArrayList<String> booksType=null;
		//查询接口
		BookDaoImpl bookDaoImpl=new BookDaoImpl();
		booksType=bookDaoImpl.SelectAllBookType();
		return booksType;
	}
}
