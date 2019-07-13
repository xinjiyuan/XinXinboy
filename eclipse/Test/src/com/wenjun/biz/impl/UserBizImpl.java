package com.wenjun.biz.impl;

import com.wenjun.Dao.UserDao;
import com.wenjun.Dao.impl.UserDaoimpl;
import com.wenjun.biz.UserBiz;
import com.wenjun.entity.User;

public class UserBizImpl implements UserBiz{
	private UserDao userDao = new UserDaoimpl();

	@Override
	public Boolean register(String username, String password) {
		// TODO Auto-generated method stub
		User user = new User();
		user.setUsername(username);
		user.setPassword(password);
		Integer result = userDao.register(user);
		if(result > 0)
			return true;
		return false;
	}

	@Override
	public User login(String username, String password) {
		// TODO Auto-generated method stub
		User user = new User();
		user.setUsername(username);
		user.setPassword(password);
		User u = userDao.login(user);
		return u;
	}
	
	

}
