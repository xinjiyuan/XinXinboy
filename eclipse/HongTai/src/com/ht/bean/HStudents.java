package com.ht.bean;

import java.sql.Date;



public class HStudents {
	
	private Integer id;
	private String name;
	private String password;
	private String parent;
	private String parentphone;
	private Date opentime;
	private HMenu menu;	//要建Menu表
	private Boolean type;
	private String address;
	private String school;
	private String sex;
	private Integer age;
	private String grade; //年级
	
	public HStudents() {
		
	}
	
	public HStudents(Integer id, String name, String password, String parent, String parentphone, Date opentime,
			HMenu menu, Boolean type, String address, String school, String sex, Integer age, String grade) {
		super();
		this.id = id;
		this.name = name;
		this.password = password;
		this.parent = parent;
		this.parentphone = parentphone;
		this.opentime = opentime;
		this.menu = menu;
		this.type = type;
		this.address = address;
		this.school = school;
		this.sex = sex;
		this.age = age;
		this.grade = grade;
	}


	public Integer getId() {
		return id;
	}


	public void setId(Integer id) {
		this.id = id;
	}


	public String getName() {
		return name;
	}


	public void setName(String name) {
		this.name = name;
	}


	public String getPassword() {
		return password;
	}


	public void setPassword(String password) {
		this.password = password;
	}


	public String getParent() {
		return parent;
	}


	public void setParent(String parent) {
		this.parent = parent;
	}


	public String getParentphone() {
		return parentphone;
	}


	public void setParentphone(String parentphone) {
		this.parentphone = parentphone;
	}


	public Date getOpentime() {
		return opentime;
	}


	public void setOpentime(Date opentime) {
		this.opentime = opentime;
	}


	public HMenu getMenu() {
		return menu;
	}


	public void setMenu(HMenu menu) {
		this.menu = menu;
	}


	public Boolean getType() {
		return type;
	}


	public void setType(Boolean type) {
		this.type = type;
	}


	public String getAddress() {
		return address;
	}


	public void setAddress(String address) {
		this.address = address;
	}


	public String getSchool() {
		return school;
	}


	public void setSchool(String school) {
		this.school = school;
	}


	public String getSex() {
		return sex;
	}


	public void setSex(String sex) {
		this.sex = sex;
	}


	public Integer getAge() {
		return age;
	}


	public void setAge(Integer age) {
		this.age = age;
	}


	public String getGrade() {
		return grade;
	}


	public void setGrade(String grade) {
		this.grade = grade;
	}
	
	

}

