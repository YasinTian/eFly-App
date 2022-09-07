//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPOptions.h"

@class NSMutableArray, NSString;
@protocol TuSDKTSAssetInterface;

@interface TuSDKPFAlbumMultipleOptions : TuSDKCPOptions
{
    _Bool _displayCameraCell;
    _Bool _enabelShareSelection;
    _Bool _enabelPreview;
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
    unsigned long long _photoColumnNumber;
    NSString *_skipAlbumName;
    NSMutableArray<TuSDKTSAssetInterface> *_selectedAssets;
    struct CGSize _maxSelectionImageSize;
}

@property(readonly, nonatomic) NSMutableArray<TuSDKTSAssetInterface> *selectedAssets; // @synthesize selectedAssets=_selectedAssets;
@property(copy, nonatomic) NSString *skipAlbumName; // @synthesize skipAlbumName=_skipAlbumName;
@property(nonatomic) unsigned long long photoColumnNumber; // @synthesize photoColumnNumber=_photoColumnNumber;
@property(nonatomic) _Bool enabelPreview; // @synthesize enabelPreview=_enabelPreview;
@property(nonatomic) _Bool enabelShareSelection; // @synthesize enabelShareSelection=_enabelShareSelection;
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
- (void).cxx_destruct;
- (id)viewController;
- (Class)defaultViewClazz;
- (Class)defaultComponentClazz;
- (void)initOptions;

@end
