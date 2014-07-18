/*
 * Code for class SOCKET_RESOURCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F118_1461(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1462(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1463(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1464(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1465(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1466(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1467(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1468(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1469(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1470(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1471(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1472(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1473(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1474(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1475(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1476(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1477(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1478(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1479(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1480(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1481(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1482(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1483(EIF_REFERENCE);
extern EIF_TYPED_VALUE F118_1484(EIF_REFERENCE);extern EIF_INTEGER_32 c_oobmsg();

extern EIF_TYPED_VALUE F118_1485(EIF_REFERENCE);extern EIF_INTEGER_32 c_peekmsg();

extern EIF_TYPED_VALUE F118_1486(EIF_REFERENCE);extern EIF_INTEGER_32 c_msgdontroute();

extern EIF_TYPED_VALUE F118_1487(EIF_REFERENCE);extern EIF_INTEGER_32 level_sol_socket();

extern EIF_TYPED_VALUE F118_1488(EIF_REFERENCE);extern EIF_INTEGER_32 level_nsproto_raw();

extern EIF_TYPED_VALUE F118_1489(EIF_REFERENCE);extern EIF_INTEGER_32 level_nsproto_pe();

extern EIF_TYPED_VALUE F118_1490(EIF_REFERENCE);extern EIF_INTEGER_32 level_nsproto_spp();

extern EIF_TYPED_VALUE F118_1491(EIF_REFERENCE);extern EIF_INTEGER_32 level_iproto_tcp();

extern EIF_TYPED_VALUE F118_1492(EIF_REFERENCE);extern EIF_INTEGER_32 level_iproto_ip();

extern EIF_TYPED_VALUE F118_1493(EIF_REFERENCE);extern EIF_INTEGER_32 ipoptions();

extern EIF_TYPED_VALUE F118_1494(EIF_REFERENCE);extern EIF_INTEGER_32 tcpmax_seg();

extern EIF_TYPED_VALUE F118_1495(EIF_REFERENCE);extern EIF_INTEGER_32 tcpno_delay();

extern EIF_TYPED_VALUE F118_1496(EIF_REFERENCE);extern EIF_INTEGER_32 so_headerson_input();

extern EIF_TYPED_VALUE F118_1497(EIF_REFERENCE);extern EIF_INTEGER_32 so_headerson_output();

extern EIF_TYPED_VALUE F118_1498(EIF_REFERENCE);extern EIF_INTEGER_32 so_defaultheaders();

extern EIF_TYPED_VALUE F118_1499(EIF_REFERENCE);extern EIF_INTEGER_32 so_lastheader();

extern EIF_TYPED_VALUE F118_1500(EIF_REFERENCE);extern EIF_INTEGER_32 somtu();

extern EIF_TYPED_VALUE F118_1501(EIF_REFERENCE);extern EIF_INTEGER_32 soseqno();

extern EIF_TYPED_VALUE F118_1502(EIF_REFERENCE);extern EIF_INTEGER_32 so_allpackets();

extern EIF_TYPED_VALUE F118_1503(EIF_REFERENCE);extern EIF_INTEGER_32 so_nsiproute();

extern EIF_TYPED_VALUE F118_1504(EIF_REFERENCE);extern EIF_INTEGER_32 sobroadcast();

extern EIF_TYPED_VALUE F118_1505(EIF_REFERENCE);extern EIF_INTEGER_32 sodebug();

extern EIF_TYPED_VALUE F118_1506(EIF_REFERENCE);extern EIF_INTEGER_32 so_dont_route();

extern EIF_TYPED_VALUE F118_1507(EIF_REFERENCE);extern EIF_INTEGER_32 soerror();

extern EIF_TYPED_VALUE F118_1508(EIF_REFERENCE);extern EIF_INTEGER_32 so_keep_alive();

extern EIF_TYPED_VALUE F118_1509(EIF_REFERENCE);extern EIF_INTEGER_32 solinger();

extern EIF_TYPED_VALUE F118_1510(EIF_REFERENCE);extern EIF_INTEGER_32 so_oob_inline();

extern EIF_TYPED_VALUE F118_1511(EIF_REFERENCE);extern EIF_INTEGER_32 so_rcv_buf();

extern EIF_TYPED_VALUE F118_1512(EIF_REFERENCE);extern EIF_INTEGER_32 so_snd_buf();

extern EIF_TYPED_VALUE F118_1513(EIF_REFERENCE);extern EIF_INTEGER_32 so_rcv_lowat();

extern EIF_TYPED_VALUE F118_1514(EIF_REFERENCE);extern EIF_INTEGER_32 so_snd_lowat();

extern EIF_TYPED_VALUE F118_1515(EIF_REFERENCE);extern EIF_INTEGER_32 so_rcv_timeo();

extern EIF_TYPED_VALUE F118_1516(EIF_REFERENCE);extern EIF_INTEGER_32 so_snd_timeo();

extern EIF_TYPED_VALUE F118_1517(EIF_REFERENCE);extern EIF_INTEGER_32 so_reuse_addr();

extern EIF_TYPED_VALUE F118_1518(EIF_REFERENCE);extern EIF_INTEGER_32 sotype();

extern EIF_TYPED_VALUE F118_1519(EIF_REFERENCE);extern EIF_INTEGER_32 so_use_loopback();

extern EIF_TYPED_VALUE F118_1520(EIF_REFERENCE);extern EIF_INTEGER_32 c_errorno();

extern void F118_1521(EIF_REFERENCE);extern void c_reset_error();

extern EIF_TYPED_VALUE F118_1522(EIF_REFERENCE);extern EIF_INTEGER_32 family_no_support();

extern EIF_TYPED_VALUE F118_1523(EIF_REFERENCE);extern EIF_INTEGER_32 proto_no_support();

extern EIF_TYPED_VALUE F118_1524(EIF_REFERENCE);extern EIF_INTEGER_32 table_full();

extern EIF_TYPED_VALUE F118_1525(EIF_REFERENCE);extern EIF_INTEGER_32 no_buffs();

extern EIF_TYPED_VALUE F118_1526(EIF_REFERENCE);extern EIF_INTEGER_32 c_permission();

extern EIF_TYPED_VALUE F118_1527(EIF_REFERENCE);extern EIF_INTEGER_32 bad_socket();

extern EIF_TYPED_VALUE F118_1528(EIF_REFERENCE);extern EIF_INTEGER_32 no_socket();

extern EIF_TYPED_VALUE F118_1529(EIF_REFERENCE);extern EIF_INTEGER_32 error_address();

extern EIF_TYPED_VALUE F118_1530(EIF_REFERENCE);extern EIF_INTEGER_32 busy_address();

extern EIF_TYPED_VALUE F118_1531(EIF_REFERENCE);extern EIF_INTEGER_32 bound_address();

extern EIF_TYPED_VALUE F118_1532(EIF_REFERENCE);extern EIF_INTEGER_32 no_access();

extern EIF_TYPED_VALUE F118_1533(EIF_REFERENCE);extern EIF_INTEGER_32 unreadable();

extern EIF_TYPED_VALUE F118_1534(EIF_REFERENCE);extern EIF_INTEGER_32 no_connect();

extern EIF_TYPED_VALUE F118_1535(EIF_REFERENCE);extern EIF_INTEGER_32 would_block();

extern EIF_TYPED_VALUE F118_1536(EIF_REFERENCE);extern EIF_INTEGER_32 in_use();

extern EIF_TYPED_VALUE F118_1537(EIF_REFERENCE);extern EIF_INTEGER_32 socket_expire();

extern EIF_TYPED_VALUE F118_1538(EIF_REFERENCE);extern EIF_INTEGER_32 connect_refused();

extern EIF_TYPED_VALUE F118_1539(EIF_REFERENCE);extern EIF_INTEGER_32 no_network();

extern EIF_TYPED_VALUE F118_1540(EIF_REFERENCE);extern EIF_INTEGER_32 no_option();

extern EIF_TYPED_VALUE F118_1541(EIF_REFERENCE);extern EIF_INTEGER_32 c_einprogress();

extern EIF_TYPED_VALUE F118_1542(EIF_REFERENCE);extern EIF_INTEGER_32 sock_raw();

extern EIF_TYPED_VALUE F118_1543(EIF_REFERENCE);extern EIF_INTEGER_32 sock_dgrm();

extern EIF_TYPED_VALUE F118_1544(EIF_REFERENCE);extern EIF_INTEGER_32 sock_stream();

extern EIF_TYPED_VALUE F118_1545(EIF_REFERENCE);extern EIF_INTEGER_32 af_ns();

extern EIF_TYPED_VALUE F118_1546(EIF_REFERENCE);extern EIF_INTEGER_32 af_inet();

extern EIF_TYPED_VALUE F118_1547(EIF_REFERENCE);extern EIF_INTEGER_32 af_inet6();

extern EIF_TYPED_VALUE F118_1548(EIF_REFERENCE);extern EIF_INTEGER_32 af_unix();

extern EIF_TYPED_VALUE F118_1549(EIF_REFERENCE);extern EIF_INTEGER_32 c_fgetown();

extern EIF_TYPED_VALUE F118_1550(EIF_REFERENCE);extern EIF_INTEGER_32 c_fsetown();

extern EIF_TYPED_VALUE F118_1551(EIF_REFERENCE);extern EIF_INTEGER_32 c_fsetfl();

extern EIF_TYPED_VALUE F118_1552(EIF_REFERENCE);extern EIF_INTEGER_32 c_fgetfl();

extern EIF_TYPED_VALUE F118_1553(EIF_REFERENCE);extern EIF_INTEGER_32 c_fndelay();

extern EIF_TYPED_VALUE F118_1554(EIF_REFERENCE);extern EIF_INTEGER_32 c_fasync();

extern void EIF_Minit118(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SOCKET_RESOURCES}.error */
EIF_TYPED_VALUE F118_1461 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1588);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1588);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1308, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
		
		Result = RTMS_EX_H("Address not readable",20,873162085);
	} else {
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1306, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
			
			Result = RTMS_EX_H("Socket Ok",9,1074390891);
		} else {
			RTHOOK(5);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1309, dtype))(Current)).it_b);
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
				
				Result = RTMS_EX_H("Address protected",17,1503340644);
			} else {
				RTHOOK(7);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1310, dtype))(Current)).it_b);
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
					
					Result = RTMS_EX_H("Address already bound",21,1660292964);
				} else {
					RTHOOK(9);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1311, dtype))(Current)).it_b);
					if (tb1) {
						RTHOOK(10);
						RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
						
						Result = RTMS_EX_H("Address in use",14,15438693);
					} else {
						RTHOOK(11);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1312, dtype))(Current)).it_b);
						if (tb1) {
							RTHOOK(12);
							RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
							
							Result = RTMS_EX_H("Address not available",21,1332773733);
						} else {
							RTHOOK(13);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1313, dtype))(Current)).it_b);
							if (tb1) {
								RTHOOK(14);
								RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
								
								Result = RTMS_EX_H("Address is a file",17,2142535781);
							} else {
								RTHOOK(15);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1314, dtype))(Current)).it_b);
								if (tb1) {
									RTHOOK(16);
									RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
									
									Result = RTMS_EX_H("Socket invalid",14,1837204324);
								} else {
									RTHOOK(17);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1307, dtype))(Current)).it_b);
									if (tb1) {
										RTHOOK(18);
										RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
										
										Result = RTMS_EX_H("family not supported",20,731000676);
									} else {
										RTHOOK(19);
										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1315, dtype))(Current)).it_b);
										if (tb1) {
											RTHOOK(20);
											RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
											
											Result = RTMS_EX_H("No permission",13,1184493678);
										} else {
											RTHOOK(21);
											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1316, dtype))(Current)).it_b);
											if (tb1) {
												RTHOOK(22);
												RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
												
												Result = RTMS_EX_H("No buffers",10,787847027);
											} else {
												RTHOOK(23);
												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1317, dtype))(Current)).it_b);
												if (tb1) {
													RTHOOK(24);
													RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
													
													Result = RTMS_EX_H("Descriptor table full",21,1884265580);
												} else {
													RTHOOK(25);
													tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1319, dtype))(Current)).it_b);
													if (tb1) {
														RTHOOK(26);
														RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
														
														Result = RTMS_EX_H("Not connected",13,815868004);
													} else {
														RTHOOK(27);
														tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1318, dtype))(Current)).it_b);
														if (tb1) {
															RTHOOK(28);
															RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
															
															Result = RTMS_EX_H("Protocol not supported",22,243713380);
														} else {
															RTHOOK(29);
															tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1320, dtype))(Current)).it_b);
															if (tb1) {
																RTHOOK(30);
																RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
																
																Result = RTMS_EX_H("Socket would block",18,690973547);
															} else {
																RTHOOK(31);
																tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1322, dtype))(Current)).it_b);
																if (tb1) {
																	RTHOOK(32);
																	RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
																	
																	Result = RTMS_EX_H("Socket in use",13,1300329829);
																} else {
																	RTHOOK(33);
																	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1323, dtype))(Current)).it_b);
																	if (tb1) {
																		RTHOOK(34);
																		RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
																		
																		Result = RTMS_EX_H("Socket expired",14,2125642852);
																	} else {
																		RTHOOK(35);
																		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1324, dtype))(Current)).it_b);
																		if (tb1) {
																			RTHOOK(36);
																			RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
																			
																			Result = RTMS_EX_H("Connection refused",18,349967460);
																		} else {
																			RTHOOK(37);
																			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1325, dtype))(Current)).it_b);
																			if (tb1) {
																				RTHOOK(38);
																				RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
																				
																				Result = RTMS_EX_H("No network",10,639723627);
																			} else {
																				RTHOOK(39);
																				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1326, dtype))(Current)).it_b);
																				if (tb1) {
																					RTHOOK(40);
																					RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
																					
																					Result = RTMS_EX_H("Not an option",13,380168814);
																				} else {
																					RTHOOK(41);
																					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1321, dtype))(Current)).it_b);
																					if (tb1) {
																						RTHOOK(42);
																						RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
																						
																						Result = RTMS_EX_H("Connection in progress",22,1248045171);
																					} else {
																						RTHOOK(43);
																						RTDBGAL(Current, 0, 0xF80000E4, 0,0); /* Result */
																						
																						tr1 = RTMS_EX_H("Unknown error : ",16,202816032);
																						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1363, dtype))(Current)).it_i4);
																						tr2 = c_outi(ti4_1);
																						ur1 = RTCCL(tr2);
																						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3791, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
																						Result = (EIF_REFERENCE) RTCCL(tr2);
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {SOCKET_RESOURCES}.error_number */
EIF_TYPED_VALUE F118_1462 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error_number";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1589);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(117, Current, 1589);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1363, Dtype(Current)))(Current)).it_i4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_ok */
EIF_TYPED_VALUE F118_1463 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_ok";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1590);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(117, Current, 1590);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, Dtype(Current)))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_family_not_supported */
EIF_TYPED_VALUE F118_1464 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_family_not_supported";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1591);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1591);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1365, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.address_not_readable */
EIF_TYPED_VALUE F118_1465 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "address_not_readable";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1592);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1592);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1376, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.protected_address */
EIF_TYPED_VALUE F118_1466 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "protected_address";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1593);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1593);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1375, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.already_bound */
EIF_TYPED_VALUE F118_1467 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "already_bound";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1500);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1500);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1374, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.address_in_use */
EIF_TYPED_VALUE F118_1468 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "address_in_use";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1501);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1501);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1373, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.invalid_address */
EIF_TYPED_VALUE F118_1469 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "invalid_address";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1502);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1502);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1372, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.invalid_socket_handle */
EIF_TYPED_VALUE F118_1470 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "invalid_socket_handle";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1503);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1503);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1371, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.bad_socket_handle */
EIF_TYPED_VALUE F118_1471 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bad_socket_handle";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1504);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1504);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1370, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_permission */
EIF_TYPED_VALUE F118_1472 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_permission";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1505);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1505);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1369, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_buffers */
EIF_TYPED_VALUE F118_1473 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_buffers";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1506);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1506);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1368, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.dtable_full */
EIF_TYPED_VALUE F118_1474 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dtable_full";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1507);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1507);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1367, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.protocol_not_supported */
EIF_TYPED_VALUE F118_1475 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "protocol_not_supported";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1508);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1508);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1366, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.not_connected */
EIF_TYPED_VALUE F118_1476 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "not_connected";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1509);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1509);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1377, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_would_block */
EIF_TYPED_VALUE F118_1477 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_would_block";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1510);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1510);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1378, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.connect_in_progress */
EIF_TYPED_VALUE F118_1478 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "connect_in_progress";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1511);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1511);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1384, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_in_use */
EIF_TYPED_VALUE F118_1479 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_in_use";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1512);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1512);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1379, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.expired_socket */
EIF_TYPED_VALUE F118_1480 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "expired_socket";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1513);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1513);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1380, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.connection_refused */
EIF_TYPED_VALUE F118_1481 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "connection_refused";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1514);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1514);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1381, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.network */
EIF_TYPED_VALUE F118_1482 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "network";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1515);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1515);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1382, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.zero_option */
EIF_TYPED_VALUE F118_1483 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "zero_option";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1516);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(117, Current, 1516);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1305, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1383, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_oobmsg */
EIF_TYPED_VALUE F118_1484 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_oobmsg";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1517);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1517);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_oobmsg();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_peekmsg */
EIF_TYPED_VALUE F118_1485 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_peekmsg";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1518);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1518);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_peekmsg();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_msgdontroute */
EIF_TYPED_VALUE F118_1486 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_msgdontroute";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1519);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1519);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_msgdontroute();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.level_sol_socket */
EIF_TYPED_VALUE F118_1487 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_sol_socket";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1520);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1520);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_sol_socket();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.level_nsproto_raw */
EIF_TYPED_VALUE F118_1488 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_nsproto_raw";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1521);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1521);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_nsproto_raw();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.level_nsproto_pe */
EIF_TYPED_VALUE F118_1489 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_nsproto_pe";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1522);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1522);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_nsproto_pe();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.level_nsproto_spp */
EIF_TYPED_VALUE F118_1490 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_nsproto_spp";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1523);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1523);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_nsproto_spp();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.level_iproto_tcp */
EIF_TYPED_VALUE F118_1491 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_iproto_tcp";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1524);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1524);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_iproto_tcp();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.level_iproto_ip */
EIF_TYPED_VALUE F118_1492 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "level_iproto_ip";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1525);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1525);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) level_iproto_ip();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.ipoptions */
EIF_TYPED_VALUE F118_1493 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ipoptions";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1526);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1526);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) ipoptions();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.tcpmax_seg */
EIF_TYPED_VALUE F118_1494 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tcpmax_seg";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1527);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1527);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) tcpmax_seg();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.tcpno_delay */
EIF_TYPED_VALUE F118_1495 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tcpno_delay";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1528);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1528);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) tcpno_delay();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_headerson_input */
EIF_TYPED_VALUE F118_1496 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_headerson_input";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1529);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1529);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_headerson_input();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_headerson_output */
EIF_TYPED_VALUE F118_1497 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_headerson_output";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1530);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1530);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_headerson_output();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_defaultheaders */
EIF_TYPED_VALUE F118_1498 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_defaultheaders";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1531);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1531);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_defaultheaders();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_lastheader */
EIF_TYPED_VALUE F118_1499 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_lastheader";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1532);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1532);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_lastheader();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.somtu */
EIF_TYPED_VALUE F118_1500 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "somtu";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1533);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1533);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) somtu();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.soseqno */
EIF_TYPED_VALUE F118_1501 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "soseqno";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1534);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1534);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) soseqno();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_allpackets */
EIF_TYPED_VALUE F118_1502 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_allpackets";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1535);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1535);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_allpackets();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_nsiproute */
EIF_TYPED_VALUE F118_1503 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_nsiproute";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1536);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1536);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_nsiproute();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.sobroadcast */
EIF_TYPED_VALUE F118_1504 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sobroadcast";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1537);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1537);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sobroadcast();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.sodebug */
EIF_TYPED_VALUE F118_1505 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sodebug";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1538);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1538);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sodebug();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_dont_route */
EIF_TYPED_VALUE F118_1506 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_dont_route";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1539);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1539);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_dont_route();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.soerror */
EIF_TYPED_VALUE F118_1507 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "soerror";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1540);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1540);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) soerror();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_keep_alive */
EIF_TYPED_VALUE F118_1508 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_keep_alive";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1541);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1541);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_keep_alive();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.solinger */
EIF_TYPED_VALUE F118_1509 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "solinger";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1542);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1542);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) solinger();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_oob_inline */
EIF_TYPED_VALUE F118_1510 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_oob_inline";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1543);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1543);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_oob_inline();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_rcv_buf */
EIF_TYPED_VALUE F118_1511 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_rcv_buf";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1544);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1544);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_rcv_buf();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_snd_buf */
EIF_TYPED_VALUE F118_1512 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_snd_buf";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1545);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1545);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_snd_buf();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_rcv_lowat */
EIF_TYPED_VALUE F118_1513 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_rcv_lowat";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1546);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1546);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_rcv_lowat();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_snd_lowat */
EIF_TYPED_VALUE F118_1514 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_snd_lowat";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1547);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1547);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_snd_lowat();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_rcv_timeo */
EIF_TYPED_VALUE F118_1515 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_rcv_timeo";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1548);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1548);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_rcv_timeo();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_snd_timeo */
EIF_TYPED_VALUE F118_1516 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_snd_timeo";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1549);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1549);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_snd_timeo();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_reuse_addr */
EIF_TYPED_VALUE F118_1517 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_reuse_addr";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1550);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1550);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_reuse_addr();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.sotype */
EIF_TYPED_VALUE F118_1518 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sotype";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1551);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1551);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sotype();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.so_use_loopback */
EIF_TYPED_VALUE F118_1519 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "so_use_loopback";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1552);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1552);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) so_use_loopback();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_errorno */
EIF_TYPED_VALUE F118_1520 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_errorno";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1553);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1553);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_errorno();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_reset_error */
void F118_1521 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_reset_error";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1554);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1554);
	RTIV(Current, RTAL);c_reset_error();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {SOCKET_RESOURCES}.family_no_support */
EIF_TYPED_VALUE F118_1522 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "family_no_support";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1555);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1555);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) family_no_support();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.proto_no_support */
EIF_TYPED_VALUE F118_1523 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "proto_no_support";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1556);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1556);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) proto_no_support();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.table_full */
EIF_TYPED_VALUE F118_1524 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "table_full";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1557);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1557);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) table_full();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_buffs */
EIF_TYPED_VALUE F118_1525 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_buffs";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1558);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1558);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_buffs();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_permission */
EIF_TYPED_VALUE F118_1526 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_permission";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1559);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1559);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_permission();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.bad_socket */
EIF_TYPED_VALUE F118_1527 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bad_socket";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1560);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1560);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) bad_socket();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_socket */
EIF_TYPED_VALUE F118_1528 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_socket";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1561);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1561);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_socket();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.error_address */
EIF_TYPED_VALUE F118_1529 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error_address";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1562);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1562);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) error_address();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.busy_address */
EIF_TYPED_VALUE F118_1530 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "busy_address";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1563);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1563);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) busy_address();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.bound_address */
EIF_TYPED_VALUE F118_1531 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bound_address";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1564);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1564);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) bound_address();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_access */
EIF_TYPED_VALUE F118_1532 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_access";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1565);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1565);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_access();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.unreadable */
EIF_TYPED_VALUE F118_1533 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unreadable";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1566);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1566);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) unreadable();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_connect */
EIF_TYPED_VALUE F118_1534 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_connect";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1567);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1567);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_connect();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.would_block */
EIF_TYPED_VALUE F118_1535 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "would_block";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1568);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1568);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) would_block();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.in_use */
EIF_TYPED_VALUE F118_1536 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "in_use";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1569);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1569);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) in_use();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.socket_expire */
EIF_TYPED_VALUE F118_1537 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "socket_expire";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1570);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1570);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) socket_expire();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.connect_refused */
EIF_TYPED_VALUE F118_1538 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "connect_refused";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1571);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1571);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) connect_refused();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_network */
EIF_TYPED_VALUE F118_1539 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_network";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1572);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1572);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_network();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.no_option */
EIF_TYPED_VALUE F118_1540 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "no_option";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1573);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1573);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) no_option();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_einprogress */
EIF_TYPED_VALUE F118_1541 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_einprogress";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1574);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1574);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_einprogress();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.sock_raw */
EIF_TYPED_VALUE F118_1542 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sock_raw";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1575);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1575);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sock_raw();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.sock_dgrm */
EIF_TYPED_VALUE F118_1543 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sock_dgrm";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1576);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1576);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sock_dgrm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.sock_stream */
EIF_TYPED_VALUE F118_1544 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sock_stream";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1577);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1577);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sock_stream();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.af_ns */
EIF_TYPED_VALUE F118_1545 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_ns";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1578);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1578);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) af_ns();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.af_inet */
EIF_TYPED_VALUE F118_1546 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_inet";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1579);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1579);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) af_inet();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.af_inet6 */
EIF_TYPED_VALUE F118_1547 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_inet6";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1580);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1580);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) af_inet6();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.af_unix */
EIF_TYPED_VALUE F118_1548 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "af_unix";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1581);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1581);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) af_unix();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_fgetown */
EIF_TYPED_VALUE F118_1549 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fgetown";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1582);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1582);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fgetown();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_fsetown */
EIF_TYPED_VALUE F118_1550 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fsetown";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1583);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1583);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fsetown();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_fsetfl */
EIF_TYPED_VALUE F118_1551 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fsetfl";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1584);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1584);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fsetfl();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_fgetfl */
EIF_TYPED_VALUE F118_1552 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fgetfl";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1585);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1585);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fgetfl();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_fndelay */
EIF_TYPED_VALUE F118_1553 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fndelay";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1586);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1586);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fndelay();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SOCKET_RESOURCES}.c_fasync */
EIF_TYPED_VALUE F118_1554 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_fasync";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 117, Current, 0, 0, 1587);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(117, Current, 1587);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fasync();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit118 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
