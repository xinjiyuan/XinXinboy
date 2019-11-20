package com.jb.dao;

import java.sql.SQLException;
import java.util.ArrayList;

import com.jb.bean.BookInfo;

public interface BookDao {
	public ArrayList<BookInfo> SelectAllBook() throws SQLException;
	public BookInfo SelectBookByName(String name);
	public ArrayList<BookInfo> SelectBookByType(String type);
	public ArrayList<String> SelectAllBookType() throws SQLException;
	
}
