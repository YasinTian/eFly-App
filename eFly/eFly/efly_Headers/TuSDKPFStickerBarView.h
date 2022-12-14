//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKPFStickerBarViewBase.h"

#import "TuSDKPFStickerTableViewDelegate-Protocol.h"

@class NSString, TuSDKPFStickerTableView, UIButton, UIView;
@protocol TuSDKPFStickerBarViewDelegate;

@interface TuSDKPFStickerBarView : TuSDKPFStickerBarViewBase <TuSDKPFStickerTableViewDelegate>
{
    UIView *_paramsView;
    UIButton *_emptyTitle;
    TuSDKPFStickerTableView *_tableBar;
    id <TuSDKPFStickerBarViewDelegate> _delegate;
    TuSDKPFStickerTableView *_tableView;
    unsigned long long _gridHeight;
}

@property(nonatomic) unsigned long long gridHeight; // @synthesize gridHeight=_gridHeight;
@property(readonly, nonatomic) TuSDKPFStickerTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) UIButton *emptyTitle; // @synthesize emptyTitle=_emptyTitle;
@property(readonly, nonatomic) UIView *paramsView; // @synthesize paramsView=_paramsView;
@property(nonatomic) __weak id <TuSDKPFStickerBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onCategoryEmptyAction;
- (void)stickerTableView:(id)arg1 selectedData:(id)arg2 indexPath:(id)arg3;
- (void)refreshCateDatas;
- (void)onCategorySelectedAction:(id)arg1;
- (void)selectCateButtonWithIndex:(unsigned long long)arg1;
- (id)buildButtonWithCategory:(id)arg1 left:(double)arg2 width:(double)arg3 index:(unsigned long long)arg4;
- (void)loadCatategories:(id)arg1;
- (void)needUpdateLayout;
- (void)lsqInitView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

