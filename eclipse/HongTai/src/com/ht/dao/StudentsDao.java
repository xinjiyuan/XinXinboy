package com.ht.dao;

import java.sql.SQLException;
import com.ht.bean.HStudents;

public interface StudentsDao {
	public HStudents selectStudentsByID(Integer id, String password) throws SQLException;
	public HStudents selectStudentsByName(String name, String password) throws SQLException;
	public void AddStudents(HStudents student) throws SQLException;
	public void DelStudentsByID(Integer id); 
	public void DelStudentsByName(String name);

}
