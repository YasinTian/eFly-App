//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TuSDKPFAlbumPopListProtocol-Protocol.h"
#import "TuSDKPFPhotoGridProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSString, TuSDKPFAlbumPopList, TuSDKPFPhotosGridView, UIButton;
@protocol TuSDKPFAlbumMultipleViewProtocol;

@interface TuSDKPFAlbumMultipleView : UIView <TuSDKPFAlbumPopListProtocol, TuSDKPFPhotoGridProtocol>
{
    UIButton *_backgroundClickArea;
    _Bool _enabelShareSelection;
    _Bool _displayCameraCell;
    Class _albumPopListClazz;
    double _popListRowHeight;
    Class _albumPopListCellClazz;
    Class _photosViewClazz;
    Class _gridCellViewClazz;
    TuSDKPFAlbumPopList *_albumPopList;
    TuSDKPFPhotosGridView *_photosView;
    unsigned long long _photoColumnNumber;
    NSArray *_groups;
    NSMutableArray *_selectedItems;
    unsigned long long _maxSelectionNumber;
    id <TuSDKPFAlbumMultipleViewProtocol> _selectedProtocol;
    struct CGSize _maxSelectionImageSize;
}

@property(nonatomic) id <TuSDKPFAlbumMultipleViewProtocol> selectedProtocol; // @synthesize selectedProtocol=_selectedProtocol;
@property(nonatomic) _Bool displayCameraCell; // @synthesize displayCameraCell=_displayCameraCell;
@property(nonatomic) struct CGSize maxSelectionImageSize; // @synthesize maxSelectionImageSize=_maxSelectionImageSize;
@property(nonatomic) unsigned long long maxSelectionNumber; // @synthesize maxSelectionNumber=_maxSelectionNumber;
@property(readonly, nonatomic) NSMutableArray *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(nonatomic) _Bool enabelShareSelection; // @synthesize enabelShareSelection=_enabelShareSelection;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(nonatomic) unsigned long long photoColumnNumber; // @synthesize photoColumnNumber=_photoColumnNumber;
@property(retain, nonatomic) TuSDKPFPhotosGridView *photosView; // @synthesize photosView=_photosView;
@property(retain, nonatomic) TuSDKPFAlbumPopList *albumPopList; // @synthesize albumPopList=_albumPopList;
@property(retain, nonatomic) Class gridCellViewClazz; // @synthesize gridCellViewClazz=_gridCellViewClazz;
@property(retain, nonatomic) Class photosViewClazz; // @synthesize photosViewClazz=_photosViewClazz;
@property(retain, nonatomic) Class albumPopListCellClazz; // @synthesize albumPopListCellClazz=_albumPopListCellClazz;
@property(nonatomic) double popListRowHeight; // @synthesize popListRowHeight=_popListRowHeight;
@property(retain, nonatomic) Class albumPopListClazz; // @synthesize albumPopListClazz=_albumPopListClazz;
- (void).cxx_destruct;
- (id)getSelectedItem;
- (void)onTuSDKPFPhotoGridAssetClicked:(id)arg1 atIndexPath:(id)arg2;
- (void)requestPhotoWithData:(id)arg1 cellIndexPath:(id)arg2;
- (void)onTuSDKPFPhotoGridAssetSelected:(id)arg1 atIndexPath:(id)arg2;
- (void)reloadSelections;
- (_Bool)getAlbumListViewState;
- (void)toggleAlbumListViewState;
- (void)onAlbumHidden;
- (void)selectGroup:(id)arg1;
- (void)onTuSDKPFAlbumSelectedWithGroup:(id)arg1;
- (void)lsqInitView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

