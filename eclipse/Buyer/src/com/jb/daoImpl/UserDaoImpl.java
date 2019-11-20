package com.jb.daoImpl;
import com.jb.bean.UserInfo;
import com.jb.dao.UserDao;
import com.jb.util.ConDB;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class UserDaoImpl implements UserDao{


	/*
	 *查询用户
	 * @see com.jb.dao.UserDao#SelectUser(com.jb.bean.UserInfo)
	 */
	@Override
	public UserInfo SelectUser(UserInfo user) throws SQLException {
		
		PreparedStatement ptmt=null;
		String sql="select * from login where username=? and password=?;";
		ResultSet rs=null;
		Connection connection=null;
		UserInfo userInfo=null;
		try {
			connection = ConDB.GetConnection();
			ptmt=connection.prepareStatement(sql);
			ptmt.setString(1, user.getUsername());
			ptmt.setString(2, user.getPassword());
			rs=ptmt.executeQuery();
			if(rs.next())
			{
				userInfo=new UserInfo();
				userInfo.setUsername(rs.getString(1));
				userInfo.setPassword(rs.getString(2));
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			System.out.println("查询过程出错");
			e.printStackTrace();
		}
		finally {
			ConDB.CloseConnection(connection);
			ConDB.ClosePre(ptmt);
			ConDB.CloseRS(rs);
		}
		
		return userInfo;
	}

	/*
	 * 添加用户
	 * @see com.jb.dao.UserDao#AddUser(com.jb.bean.UserInfo)
	 */
	@Override
	public void AddUser(UserInfo user) throws SQLException {
		PreparedStatement ptmt=null;
		String sql="insert into login values(?,?);";
		Connection connection=null;
		try {
			connection = ConDB.GetConnection();
			ptmt=connection.prepareStatement(sql);
			ptmt.setString(1, user.getUsername());
			ptmt.setString(2, user.getPassword());
			ptmt.executeUpdate();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			System.out.println("添加用户过程出错");
			e.printStackTrace();
		}
		finally {
			ConDB.CloseConnection(connection);
			ConDB.ClosePre(ptmt);
		}                              
		
	}

	/*
	 * 删除用户
	 * @see com.jb.dao.UserDao#DelUser(com.jb.bean.UserInfo)
	 */
	@Override
	public void DelUser(UserInfo user) {
		// TODO Auto-generated method stub
		
		
	}

}
