//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKPFAlbumMultipleViewControllerBase.h"

#import "TuSDKPFAlbumMultipleDelegate-Protocol.h"
#import "TuSDKPFAlbumMultipleViewProtocol-Protocol.h"
#import "TuSDKPFPhotoPreviewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, TuSDKICTitleView, TuSDKPFAlbumMultipleView, UIGestureRecognizer;
@protocol TuSDKPFAlbumMultipleDelegate, TuSDKTSAssetInterface;

@interface TuSDKPFAlbumMultipleViewController : TuSDKPFAlbumMultipleViewControllerBase <TuSDKPFPhotoPreviewControllerDelegate, TuSDKPFAlbumMultipleDelegate, TuSDKPFAlbumMultipleViewProtocol>
{
    TuSDKPFAlbumMultipleView *_defaultStyleView;
    TuSDKICTitleView *_titleView;
    UIGestureRecognizer *_gesture;
    _Bool _displayCameraCell;
    _Bool _enabelShareSelection;
    _Bool _enabelPreview;
    _Bool _openedByCameraController;
    id <TuSDKPFAlbumMultipleDelegate> _delegate;
    Class _viewClazz;
    Class _albumPopListClazz;
    double _popListRowHeight;
    Class _albumPopListCellClazz;
    Class _photosViewClazz;
    Class _gridCellViewClazz;
    Class _previewClazz;
    Class _previewPhotosViewClazz;
    Class _previewCellViewClazz;
    unsigned long long _maxSelectionNumber;
    long long _photosSortKeyType;
    NSMutableArray<TuSDKTSAssetInterface> *_selectedAssets;
    unsigned long long _photoColumnNumber;
    struct CGSize _maxSelectionImageSize;
}

@property(nonatomic) _Bool openedByCameraController; // @synthesize openedByCameraController=_openedByCameraController;
@property(nonatomic) unsigned long long photoColumnNumber; // @synthesize photoColumnNumber=_photoColumnNumber;
@property(nonatomic) _Bool enabelPreview; // @synthesize enabelPreview=_enabelPreview;
@property(nonatomic) _Bool enabelShareSelection; // @synthesize enabelShareSelection=_enabelShareSelection;
@property(retain, nonatomic) NSMutableArray<TuSDKTSAssetInterface> *selectedAssets; // @synthesize selectedAssets=_selectedAssets;
@property(nonatomic) _Bool displayCameraCell; // @synthesize displayCameraCell=_displayCameraCell;
@property(nonatomic) long long photosSortKeyType; // @synthesize photosSortKeyType=_photosSortKeyType;
@property(nonatomic) struct CGSize maxSelectionImageSize; // @synthesize maxSelectionImageSize=_maxSelectionImageSize;
@property(nonatomic) unsigned long long maxSelectionNumber; // @synthesize maxSelectionNumber=_maxSelectionNumber;
@property(retain, nonatomic) Class previewCellViewClazz; // @synthesize previewCellViewClazz=_previewCellViewClazz;
@property(retain, nonatomic) Class previewPhotosViewClazz; // @synthesize previewPhotosViewClazz=_previewPhotosViewClazz;
@property(retain, nonatomic) Class previewClazz; // @synthesize previewClazz=_previewClazz;
@property(retain, nonatomic) Class gridCellViewClazz; // @synthesize gridCellViewClazz=_gridCellViewClazz;
@property(retain, nonatomic) Class photosViewClazz; // @synthesize photosViewClazz=_photosViewClazz;
@property(retain, nonatomic) Class albumPopListCellClazz; // @synthesize albumPopListCellClazz=_albumPopListCellClazz;
@property(nonatomic) double popListRowHeight; // @synthesize popListRowHeight=_popListRowHeight;
@property(retain, nonatomic) Class albumPopListClazz; // @synthesize albumPopListClazz=_albumPopListClazz;
@property(retain, nonatomic) Class viewClazz; // @synthesize viewClazz=_viewClazz;
@property(nonatomic) __weak id <TuSDKPFAlbumMultipleDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TuSDKPFAlbumMultipleView *defaultStyleView; // @synthesize defaultStyleView=_defaultStyleView;
- (void).cxx_destruct;
- (void)onComponent:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)onTuSDKPFPhotos:(id)arg1 selectedAssets:(id)arg2;
- (void)notifySelectedAsset:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)onTuSDKPFPhotosCellClickedWithAsset:(id)arg1 currentIndex:(long long)arg2;
- (void)onTuSDKPFPhotosCellSelectedWithAsset:(id)arg1;
- (void)onAlbumGroupViewStateChanged;
- (void)onTuSDKPFAlbumViewSelectedGroup:(id)arg1;
- (void)onCompleteAction;
- (void)cancelAction;
- (void)onAlbumTitleClicked;
- (void)setTitleIcon:(id)arg1;
- (void)setTitleIconState:(_Bool)arg1;
- (void)setTitleWithAlbumName:(id)arg1 forState:(_Bool)arg2;
- (void)notifySelectedGroup:(id)arg1;
- (void)configPhotoView:(id)arg1;
- (void)configDefaultStyleView:(id)arg1;
- (void)buildAlbumMultipleView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

