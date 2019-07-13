package com.wenjun.Dao;

import com.wenjun.entity.User;

public interface UserDao {
	/*
	 * 用户注册
	 * */
	Integer register(User user);
	
	/*
	 * 用户登录
	 * */
	User login(User user);

}
