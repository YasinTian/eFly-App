//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, TuSDKPFBrush, UIView;
@protocol TuSDKPFBrushTableViewInterface;

@protocol TuSDKPFBrushTableViewDelegate <NSObject>
- (void)brushTableView:(UIView<TuSDKPFBrushTableViewInterface> *)arg1 selectedData:(TuSDKPFBrush *)arg2 indexPath:(NSIndexPath *)arg3;
@end

