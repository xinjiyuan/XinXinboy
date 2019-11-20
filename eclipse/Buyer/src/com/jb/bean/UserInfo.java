package com.jb.bean;

public class UserInfo {
	/**
	 * username账号
	 * password密码
	 * 默认为error
	 */
	String username;
	String password;
	public UserInfo() {
		this.username="error";
		this.password="error";
	}
	public UserInfo(String username, String password) {
		this.username = username;
		this.password = password;
	}
	public String getUsername() {
		return username;
	}
	public void setUsername(String username) {
		this.username = username;
	}
	public String getPassword() {
		return password;
	}
	public void setPassword(String password) {
		this.password = password;
	}
}
