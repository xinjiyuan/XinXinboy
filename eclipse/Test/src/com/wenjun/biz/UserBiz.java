package com.wenjun.biz;

import com.wenjun.entity.User;

public interface UserBiz {
	/*
	 * 用户注册
	 * */
	Boolean register(String username, String password);
	
	/*
	 * 用户登录
	 * */
	User login(String username, String password);

}
