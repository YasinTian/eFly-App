//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, TuSDKCPGroupFilterItem, UITableViewCell, UIView;
@protocol TuSDKCPGroupFilterItemCellInterface, TuSDKCPStackFilterTableViewInterface;

@protocol TuSDKCPStackFilterTableViewDelegate <NSObject>
- (_Bool)onTuSDKCPGroupFilterTableView:(UIView<TuSDKCPStackFilterTableViewInterface> *)arg1 selectedCell:(UITableViewCell<TuSDKCPGroupFilterItemCellInterface> *)arg2 model:(TuSDKCPGroupFilterItem *)arg3 indexPath:(NSIndexPath *)arg4;
@end

