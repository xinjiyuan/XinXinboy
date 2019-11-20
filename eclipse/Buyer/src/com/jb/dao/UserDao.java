package com.jb.dao;

import java.sql.SQLException;

import com.jb.bean.UserInfo;

public interface UserDao {

	public UserInfo SelectUser(UserInfo user) throws SQLException;
	public void AddUser(UserInfo user) throws SQLException;
	public void DelUser(UserInfo user);
}
