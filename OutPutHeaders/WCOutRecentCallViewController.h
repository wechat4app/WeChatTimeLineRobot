/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class WCOutPhoneContact, NSString, NSArray, UITableView;

@interface WCOutRecentCallViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate> {
	WCOutPhoneContact* m_contact;
	NSArray* m_recentCallLists;
	UITableView* m_tableView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)recentCallCellAtRow:(unsigned)row;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)onDataDidLoad;
-(void)configData;
-(void)configTableView;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithPhoneContact:(id)phoneContact;
@end

