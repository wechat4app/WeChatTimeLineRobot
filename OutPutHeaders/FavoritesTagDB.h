/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MyFavoritesDB;

@interface FavoritesTagDB : XXUnknownSuperclass {
	MyFavoritesDB* _mmDB;
}
-(void).cxx_destruct;
-(BOOL)getTags:(id)tags byFavLocalId:(unsigned long)anId;
-(BOOL)getDistinctTags:(id)tags;
-(BOOL)deleteTagsByLocalFavId:(unsigned long)anId;
-(BOOL)insertTag:(id)tag withFavLocalId:(unsigned long)favLocalId;
-(void)initDB:(id)db;
-(id)init;
@end

