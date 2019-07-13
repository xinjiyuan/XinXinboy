CREATE TABLE `tb_user`(
	`u_id` int(11) NOT NULL AUTO_INCREMENT COMMENT '用户编号',
	`u_username` varchar(30) NOT NULL COMMENT '用户名',
	`u_password` varchar(30) NOT NULL COMMENT '密码',
	PRIMARY KEY (`u_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
