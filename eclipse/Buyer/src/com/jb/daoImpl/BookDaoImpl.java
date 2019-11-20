package com.jb.daoImpl;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;

import com.jb.bean.BookInfo;
import com.jb.dao.BookDao;
import com.jb.util.ConDB;
import java.sql.Statement;

public class BookDaoImpl implements BookDao {

	/*
	 * 查询所有的图书
	 * @see com.jb.dao.BookDao#SelectAllBook()
	 */
	@Override
	public ArrayList<BookInfo> SelectAllBook() throws SQLException {
		ArrayList<BookInfo> books=new ArrayList<>();
		Statement stmt=null;
		String sql="select * from novel;";
		ResultSet rs=null;
		Connection connection=null;
		BookInfo bookInfo=null;
		try {
			connection = ConDB.GetConnection();
			stmt=connection.createStatement();
			rs=stmt.executeQuery(sql);
			while(rs.next())
			{
				bookInfo=new BookInfo();
				bookInfo.setId(rs.getInt(1));
				bookInfo.setName(rs.getString(2));
				bookInfo.setAuthor(rs.getString(3));
				bookInfo.setImg(rs.getString(4));
				bookInfo.setIntroduction(rs.getString(13));
				bookInfo.setNovel_url(rs.getString(15));
				bookInfo.setChapter_url(rs.getString(16));
				books.add(bookInfo);
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			System.out.println("查询过程出错");
			e.printStackTrace();
		}
		finally {
			ConDB.CloseConnection(connection);
			ConDB.CloseSta(stmt);
			ConDB.CloseRS(rs);
		}
		return books;
	}

	@Override
	public BookInfo SelectBookByName(String name) {
		//ToDo
		return null;
	}

	@Override
	public ArrayList<BookInfo> SelectBookByType(String type) {
		//ToDo SELECT Type FROM soft.novel group by Type;
		return null;
	}

	@Override
	public ArrayList<String> SelectAllBookType() throws SQLException {
	
		ArrayList<String> booksType=new ArrayList<>();
		Statement stmt=null;
		String sql="SELECT Type FROM soft.novel group by Type;";
		ResultSet rs=null;
		Connection connection=null;
		try {
			connection = ConDB.GetConnection();
			stmt=connection.createStatement();
			rs=stmt.executeQuery(sql);
			while(rs.next())
			{
				booksType.add(rs.getString(1));
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			System.out.println("查询过程出错");
			e.printStackTrace();
		}
		finally {
			ConDB.CloseConnection(connection);
			ConDB.CloseSta(stmt);
			ConDB.CloseRS(rs);
		}
		return booksType;
	}

}
