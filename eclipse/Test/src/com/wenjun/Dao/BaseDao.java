package com.wenjun.Dao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class BaseDao {
	protected Connection conn;
	protected PreparedStatement ps;
	protected ResultSet rs;
	public Connection getConnection() {
		try {
			Class.forName("com.mysql.jbdc.Driver");
			conn = DriverManager.getConnection("jbdc:mysql://localhost:3306/demo?useSSL=false","alex","123");
			
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
			// TODO: handle exception
		}
		catch (SQLException e) {
			e.printStackTrace();
			// TODO: handle exception
		}
		return conn;
	}
	
	public void closeDB(ResultSet rs, PreparedStatement os, Connection conn)
	{
		try {
			if(rs != null)
			{
				rs.close();
			}
		} catch (SQLException e) {
			e.printStackTrace();
			// TODO: handle exception
		}
		
		try {
			if(ps != null)
				ps.close();
		} catch (SQLException e) {
			e.printStackTrace();
			// TODO: handle exception
		}
		
		try {
			if(conn != null)
				conn.close();
		} catch (SQLException e) {
			e.printStackTrace();
			// TODO: handle exception
		}
	}
	
	public static void main(String[] args) {
		BaseDao dao = new BaseDao();
		System.out.println(dao.getConnection());
	}
	

}
