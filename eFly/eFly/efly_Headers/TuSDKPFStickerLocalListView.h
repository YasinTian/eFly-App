//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TuSDKICPagerHolderViewProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TuSDKICTableView, TuSDKPFStickerCategory;
@protocol TuSDKPFStickerLocalViewProtocol;

@interface TuSDKPFStickerLocalListView : UIView <TuSDKICPagerHolderViewProtocol, UITableViewDataSource, UITableViewDelegate>
{
    TuSDKICTableView *_tableView;
    NSMutableArray *_sections;
    TuSDKPFStickerCategory *_data;
    id <TuSDKPFStickerLocalViewProtocol> _gridProtocol;
    Class _cellViewClazz;
    Class _gridViewClazz;
    Class _cellHeaderViewClazz;
    Class _emptyViewClazz;
}

@property(retain, nonatomic) Class emptyViewClazz; // @synthesize emptyViewClazz=_emptyViewClazz;
@property(retain, nonatomic) Class cellHeaderViewClazz; // @synthesize cellHeaderViewClazz=_cellHeaderViewClazz;
@property(retain, nonatomic) Class gridViewClazz; // @synthesize gridViewClazz=_gridViewClazz;
@property(retain, nonatomic) Class cellViewClazz; // @synthesize cellViewClazz=_cellViewClazz;
@property(nonatomic) id <TuSDKPFStickerLocalViewProtocol> gridProtocol; // @synthesize gridProtocol=_gridProtocol;
@property(retain, nonatomic) TuSDKPFStickerCategory *data; // @synthesize data=_data;
@property(readonly, nonatomic) TuSDKICTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)onEmptyViewAction;
- (_Bool)canZoom;
- (void)lsqInitView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

