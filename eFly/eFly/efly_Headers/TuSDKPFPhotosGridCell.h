//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TuSDKCircularProgressView, UIButton, UIImageView, UIView;
@protocol TuSDKPFPhotosGridCellDelegate;

@interface TuSDKPFPhotosGridCell : UICollectionViewCell
{
    UIImageView *_thumbView;
    UIButton *_selectedView;
    UIButton *_selectButton;
    _Bool _cellSelected;
    _Bool _enableMultiSelection;
    UIView *_progressBgView;
    TuSDKCircularProgressView *_progressView;
    id <TuSDKPFPhotosGridCellDelegate> _photosGridCellDelegate;
}

@property(nonatomic) __weak id <TuSDKPFPhotosGridCellDelegate> photosGridCellDelegate; // @synthesize photosGridCellDelegate=_photosGridCellDelegate;
@property(retain, nonatomic) TuSDKCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *progressBgView; // @synthesize progressBgView=_progressBgView;
@property(nonatomic) _Bool enableMultiSelection; // @synthesize enableMultiSelection=_enableMultiSelection;
@property(retain, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
- (void).cxx_destruct;
- (void)updateSelectionView;
- (void)setSelectionCellData:(id)arg1;
- (void)viewNeedRest;
- (void)setData:(id)arg1;
- (void)selected;
- (void)lsqInitView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

