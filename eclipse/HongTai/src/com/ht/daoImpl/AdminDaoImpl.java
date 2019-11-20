package com.ht.daoImpl;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import com.ht.bean.HAdmin;
import com.ht.dao.AdminDao;
import com.ht.util.ConDB;

public class AdminDaoImpl implements AdminDao {

	@Override
	public HAdmin selectAdmin(Integer id, String password) throws SQLException {
		// TODO Auto-generated method stub
		PreparedStatement ptmt = null;
		String sql = "select * from admin where id=? and password=?;";
		ResultSet rs = null;
		Connection connection = null;
		HAdmin admin = null;
		try {
			connection = ConDB.GetConnection();
			ptmt = connection.prepareStatement(sql);
			ptmt.setLong(1, id);
			ptmt.setString(2, password);
			rs=ptmt.executeQuery();
			if(rs.next())
			{
				admin=new HAdmin();
				
			}
		} catch (SQLException e) {
			// TODO: handle exception
		}
		return null;
	}

	@Override
	public void AddAdmin(HAdmin admin) throws SQLException {
		// TODO Auto-generated method stub

	}

	@Override
	public void DelAdminByID(Integer id) {
		// TODO Auto-generated method stub

	}

}
