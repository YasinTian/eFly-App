//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKPFPhotosViewControllerBase.h"

#import "TuSDKPFPhotosCellProtocol-Protocol.h"

@class NSString, TuSDKPFPhotosView;
@protocol TuSDKPFPhotosDelegate, TuSDKTSAssetInterface, TuSDKTSAssetsGroupInterface;

@interface TuSDKPFPhotosViewController : TuSDKPFPhotosViewControllerBase <TuSDKPFPhotosCellProtocol>
{
    TuSDKPFPhotosView *_defaultStyleView;
    _Bool _downloading;
    id <TuSDKPFPhotosDelegate> _delegate;
    Class _viewClazz;
    Class _cellViewClazz;
    Class _gridViewClazz;
    Class _cellHeaderViewClazz;
    Class _emptyViewClazz;
    id <TuSDKTSAssetsGroupInterface> _group;
    id <TuSDKTSAssetInterface> _inputAsset;
    struct CGSize _maxSelectionImageSize;
}

@property(retain, nonatomic) id <TuSDKTSAssetInterface> inputAsset; // @synthesize inputAsset=_inputAsset;
@property(retain, nonatomic) id <TuSDKTSAssetsGroupInterface> group; // @synthesize group=_group;
@property(nonatomic) struct CGSize maxSelectionImageSize; // @synthesize maxSelectionImageSize=_maxSelectionImageSize;
@property(retain, nonatomic) Class emptyViewClazz; // @synthesize emptyViewClazz=_emptyViewClazz;
@property(retain, nonatomic) Class cellHeaderViewClazz; // @synthesize cellHeaderViewClazz=_cellHeaderViewClazz;
@property(retain, nonatomic) Class gridViewClazz; // @synthesize gridViewClazz=_gridViewClazz;
@property(retain, nonatomic) Class cellViewClazz; // @synthesize cellViewClazz=_cellViewClazz;
@property(retain, nonatomic) Class viewClazz; // @synthesize viewClazz=_viewClazz;
@property(nonatomic) __weak id <TuSDKPFPhotosDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TuSDKPFPhotosView *defaultStyleView; // @synthesize defaultStyleView=_defaultStyleView;
- (void).cxx_destruct;
- (void)onTuSDKPFPhotosCellSelectedWithAsset:(id)arg1;
- (void)notifySelectedAsset:(id)arg1;
- (void)configDefaultStyleView:(id)arg1;
- (void)buildDefaultStyleView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
- (void)didReceiveMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

