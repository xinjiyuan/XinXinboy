package com.jb.service;

import java.sql.SQLException;

import com.jb.bean.UserInfo;
import com.jb.daoImpl.UserDaoImpl;

public class UserService {
	
	/*
	 * 1.查询用户存在
	 */
	public UserInfo SelectUser(UserInfo user) throws SQLException
	{
		/*
		 * 查询是否存在该用户
		 * 
		 */
		UserInfo GetUser;
		/*
		 * 调用查询接口
		 */
		UserDaoImpl userDaoImpl=new UserDaoImpl();
		GetUser=userDaoImpl.SelectUser(user);
		return GetUser;
	}
	/*
	 * 2.添加用户
	 */
	public void AddUser(UserInfo user) throws SQLException
	{
		UserDaoImpl userDaoImpl=new UserDaoImpl();
		userDaoImpl.AddUser(user);
	}
}
