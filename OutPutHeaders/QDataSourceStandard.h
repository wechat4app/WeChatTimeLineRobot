/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "QDataSourceBase.h"
#import "WeChat-Structs.h"

@protocol QDataSourceStandardDelegate;

__attribute__((visibility("hidden")))
@interface QDataSourceStandard : QDataSourceBase {
	id<QDataSourceStandardDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<QDataSourceStandardDelegate> delegate;
+(id)dataSourceStandard;
-(void).cxx_destruct;
-(id)tilePath:(GifExtInfo)path;
-(void)startVersionDetection;
-(id)URLForVersionDetection;
@end

