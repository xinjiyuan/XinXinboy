package com.wenjun.Dao.impl;

import java.sql.SQLException;

import com.wenjun.Dao.BaseDao;
import com.wenjun.Dao.UserDao;
import com.wenjun.entity.User;

public class UserDaoimpl extends BaseDao implements UserDao{

	@Override
	public Integer register(User user) {
		// TODO Auto-generated method stub
		int row = 0;
		conn = getConnection();
		String sql = "insert into tb_user(u_username,u_password) values(?,?)";
		try {
			ps = conn.prepareStatement(sql);
			ps.setString(1, user.getUsername());
			ps.setString(2, user.getPassword());
			row = ps.executeUpdate();
		} catch (SQLException e) {
			// TODO: handle exception
			e.printStackTrace();
		} finally {
			closeDB(rs, ps, conn);
		}
		return row;
	}

	@Override
	public User login(User user) {
		// TODO Auto-generated method stub
		User u = null;
		conn = getConnection();
		
		String sql = "select * from tb_user where u_username=? and u_password=?";
		try {
			ps=conn.prepareStatement(sql);
			ps.setString(1, user.getUsername());
			ps.setString(2, user.getPassword());
			rs = ps.executeQuery();
			while (rs.next()) {
				u=new User();
				u.setUid(rs.getInt(1));
				u.setUsername(rs.getString(2));
				u.setPassword(rs.getString(3));
				
			}
		} catch (SQLException e) {
			// TODO: handle exception
			e.printStackTrace();
		}finally {
			closeDB(rs, ps, conn);
		}
		return u;
	}
	
	

}
