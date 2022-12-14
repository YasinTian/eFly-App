//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath;
@protocol TuSDKCPGroupFilterGroupCellDelegate, TuSDKCPGroupFilterTableViewDelegate, TuSDKTKFiltersTaskInterface;

@protocol TuSDKCPGroupFilterTableViewInterface <NSObject>
@property(nonatomic) id <TuSDKTKFiltersTaskInterface> filterTask;
@property(nonatomic) __weak id <TuSDKCPGroupFilterGroupCellDelegate> groupDelegate;
@property(nonatomic) _Bool displaySelectionIcon;
@property(nonatomic) _Bool allowsSelection;
@property(retain, nonatomic) NSArray *modeList;
@property(nonatomic) double cellWidth;
@property(retain, nonatomic) Class cellViewClazz;
@property(nonatomic) long long action;
@property(nonatomic) __weak id <TuSDKCPGroupFilterTableViewDelegate> delegate;
- (void)scrollToRowAtIndexPath:(NSIndexPath *)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (void)deleteRowsAtIndexPaths:(NSArray *)arg1 withRowAnimation:(long long)arg2;
- (void)insertRowsAtIndexPaths:(NSArray *)arg1 withRowAnimation:(long long)arg2;
- (NSIndexPath *)indexPathForSelectedRow;
- (void)reloadData;
- (void)changeSelectPostion:(unsigned long long)arg1 scrollToCenter:(_Bool)arg2 anim:(_Bool)arg3;
- (void)selectPostion:(unsigned long long)arg1 scrollToCenter:(_Bool)arg2 reload:(_Bool)arg3;
@end

