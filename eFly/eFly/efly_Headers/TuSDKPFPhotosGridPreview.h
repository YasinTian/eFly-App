//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKICGridView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol TuSDKPFPhotosGridPreviewProtocol, TuSDKTSAssetsGroupInterface;

@interface TuSDKPFPhotosGridPreview : TuSDKICGridView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_photos;
    Class _cellViewClazz;
    id <TuSDKTSAssetsGroupInterface> _group;
    long long _currentIndex;
    long long _photosSortKeyType;
    id <TuSDKPFPhotosGridPreviewProtocol> _gridProtocol;
}

+ (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) id <TuSDKPFPhotosGridPreviewProtocol> gridProtocol; // @synthesize gridProtocol=_gridProtocol;
@property(nonatomic) long long photosSortKeyType; // @synthesize photosSortKeyType=_photosSortKeyType;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) id <TuSDKTSAssetsGroupInterface> group; // @synthesize group=_group;
@property(retain, nonatomic) Class cellViewClazz; // @synthesize cellViewClazz=_cellViewClazz;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewWillDestory;
- (void)lsqInitView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
