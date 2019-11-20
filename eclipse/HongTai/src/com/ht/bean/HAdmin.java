package com.ht.bean;

import java.sql.Date;

public class HAdmin {
	
	private Integer id;
	private String password;
	private Date lasttime;
	
	public HAdmin () {
		
	}
	
	public HAdmin(Integer id, String password, Date lasttime) {
		super();
		this.id = id;
		this.password = password;
		this.lasttime = lasttime;
	}

	public Integer getId() {
		return id;
	}
	public void setId(Integer id) {
		this.id = id;
	}
	public String getPassword() {
		return password;
	}
	public void setPassword(String password) {
		this.password = password;
	}
	public Date getLasttime() {
		return lasttime;
	}
	public void setLasttime(Date lasttime) {
		this.lasttime = lasttime;
	}

}
