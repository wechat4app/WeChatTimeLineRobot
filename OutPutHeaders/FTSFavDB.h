/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class FTSDB;

@interface FTSFavDB : XXUnknownSuperclass {
	FTSDB* _database;
}
@property(retain, nonatomic) FTSDB* database;
-(void).cxx_destruct;
-(id)queryText:(id)text limit:(unsigned long)limit searchAll:(id*)all;
-(id)queryText:(id)text;
-(BOOL)deleteAllRowsInFavTable;
-(BOOL)deleteRowsInFavTable:(id)favTable;
-(BOOL)deleteRowInFavTable:(unsigned long)favTable;
-(BOOL)updateRowsInFavTable:(id)favTable;
-(BOOL)updateRowInFavTable:(id)favTable;
-(BOOL)insertRowsInFavTable:(id)favTable;
-(BOOL)insertRowInFavTable:(id)favTable;
-(BOOL)createAllTable;
-(void)reloadDB;
-(void)dealloc;
-(void)initDB:(id)db;
@end

