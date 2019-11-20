package com.ht.dao;

import java.sql.SQLException;

import com.ht.bean.HTeacher;

public interface TeacherDao {
	public HTeacher selecTeacherByID(Integer id, String password) throws SQLException;
	public HTeacher selecTeacherByName(String name, String password) throws SQLException;
	public void AddTeacher(HTeacher teacher) throws SQLException;
	public void DelTeacherByID(Integer id);
	public void DelTeacherByName(String name);

}
