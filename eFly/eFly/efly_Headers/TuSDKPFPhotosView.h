//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKICTableView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TuSDKAOCellGridViewAlgorithmic, TuSDKTSALAssetsGroupedCTD;
@protocol TuSDKPFPhotosCellProtocol, TuSDKTSAssetsGroupInterface;

@interface TuSDKPFPhotosView : TuSDKICTableView <UITableViewDataSource, UITableViewDelegate>
{
    TuSDKTSALAssetsGroupedCTD *_dataGrouped;
    TuSDKAOCellGridViewAlgorithmic *_algorithmic;
    Class _cellViewClazz;
    Class _gridViewClazz;
    Class _cellHeaderViewClazz;
    Class _emptyViewClazz;
    id <TuSDKTSAssetsGroupInterface> _group;
    id <TuSDKPFPhotosCellProtocol> _gridProtocol;
}

@property(nonatomic) id <TuSDKPFPhotosCellProtocol> gridProtocol; // @synthesize gridProtocol=_gridProtocol;
@property(retain, nonatomic) id <TuSDKTSAssetsGroupInterface> group; // @synthesize group=_group;
@property(retain, nonatomic) Class emptyViewClazz; // @synthesize emptyViewClazz=_emptyViewClazz;
@property(retain, nonatomic) Class cellHeaderViewClazz; // @synthesize cellHeaderViewClazz=_cellHeaderViewClazz;
@property(retain, nonatomic) Class gridViewClazz; // @synthesize gridViewClazz=_gridViewClazz;
@property(retain, nonatomic) Class cellViewClazz; // @synthesize cellViewClazz=_cellViewClazz;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)lsqInitView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
