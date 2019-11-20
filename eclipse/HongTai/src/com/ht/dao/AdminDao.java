package com.ht.dao;

import java.sql.SQLException;

import com.ht.bean.HAdmin;

public interface AdminDao {
	public HAdmin selectAdmin(Integer id, String password) throws SQLException;
	public void AddAdmin(HAdmin admin) throws SQLException;
	public void DelAdminByID(Integer id);

}
