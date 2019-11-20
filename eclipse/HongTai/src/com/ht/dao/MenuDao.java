package com.ht.dao;

import java.sql.SQLException;
import java.util.ArrayList;

import com.ht.bean.HMenu;

public interface MenuDao {
	public ArrayList<HMenu> selectAllMenu() throws SQLException;
	public HMenu selectMenuByID(Integer id) throws SQLException;
	public ArrayList<HMenu> selectMenuByPrice(double price) throws SQLException;
	public void AddMenu(HMenu menu) throws SQLException;
	public void DelMenuByID(Integer id);

}
