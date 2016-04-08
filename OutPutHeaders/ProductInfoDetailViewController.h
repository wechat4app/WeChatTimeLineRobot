/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCActionSheetDelegate.h"
#import "MMUIViewController.h"
#import "UIScrollViewDelegate.h"

@class ScanProductItem, NSArray, MMTableViewInfo, UIView, NSString, MMScrollView, UIPageControl;

@interface ProductInfoDetailViewController : MMUIViewController <UIScrollViewDelegate, WCActionSheetDelegate> {
	MMTableViewInfo* _mainTableViewInfo;
	ScanProductItem* _productItem;
	NSArray* _detailList;
	NSArray* _bannerList;
	MMScrollView* _adScrollView;
	UIView* _headerView;
	UIPageControl* _adPageControl;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onJumptoFeedBackView;
-(void)makeInfoCell:(id)cell cellInfo:(id)info;
-(float)getShopInfoCellHeight:(id)height;
-(void)reloadTableData;
-(void)viewDidLayoutSubviews;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)onPageControllerChangePage:(id)page;
-(id)getTableHeaderView;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)onOperate:(id)operate;
-(void)initView;
-(void)viewDidLoad;
-(id)initWithProductItem:(id)productItem;
@end
