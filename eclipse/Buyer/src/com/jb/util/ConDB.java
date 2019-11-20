package com.jb.util;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class ConDB {
	static String url="jdbc:mysql://127.0.0.1:3306/soft?verifyServerCertificate=false&useSSL=false";
	static String SqlDriver="com.mysql.jdbc.Driver";
	static String username="root";
	static String password="1234";
	public static Connection GetConnection() throws SQLException
	{
		try {
			Class.forName(SqlDriver);
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		Connection connection=DriverManager.getConnection(url, username, password);
		return connection;
	}
	/*
	 * 关闭连接
	 */
	public static void CloseConnection(Connection connection) throws SQLException
	{
		if(connection!=null)
		{
			connection.close();
		}
	}
	/*
	 * 关闭预处理
	 */
	public static void ClosePre(PreparedStatement pre) throws SQLException
	{
		if(pre!=null)
		{
			pre.close();
		}
	}
	/*
	 * 关闭语句处理
	 */
	public static void CloseSta(Statement stmt) throws SQLException
	{
		if(stmt!=null)
		{
			stmt.close();
		}
	}
	/*
	 * 关闭结果集合
	 */
	public static void CloseRS(ResultSet rs) throws SQLException
	{
		if(rs!=null)
		{
			rs.close();
		}
	}

}
