/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIProgressView : UIView <NSCoding> {
    int _barStyle;
    UIView *_contentView;
    UIVisualEffectView *_effectView;
    BOOL _isAnimating;
    CAShapeLayer *_maskLayer;
    NSProgress *_observedProgress;
    float _progress;
    NSArray *_progressColors;
    UIImage *_progressImage;
    NSObservation *_progressObservation;
    UIColor *_progressTintColor;
    UIImageView *_progressView;
    int _progressViewStyle;
    NSArray *_trackColors;
    UIImage *_trackImage;
    UIColor *_trackTintColor;
    UIImageView *_trackView;
}

@property (nonatomic, retain) NSProgress *observedProgress;
@property (nonatomic) float progress;
@property (nonatomic, retain) UIImage *progressImage;
@property (nonatomic, retain) UIColor *progressTintColor;
@property (nonatomic) int progressViewStyle;
@property (nonatomic, retain) UIImage *trackImage;
@property (nonatomic, retain) UIColor *trackTintColor;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_fillImagesForIndex:(unsigned int)arg1 style:(int)arg2 barStyle:(int)arg3;
+ (unsigned int)_indexForStyle:(int)arg1 barStyle:(int)arg2;
+ (id)_standardInnerImageForStyle:(int)arg1 barStyle:(int)arg2;
+ (id)_standardOuterImageForStyle:(int)arg1 barStyle:(int)arg2;
+ (id)_tintedImageForHeight:(float)arg1 andColors:(id)arg2;
+ (id)_tintedImageForHeight:(float)arg1 andColors:(id)arg2 roundingRectCorners:(unsigned int)arg3;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (void).cxx_destruct;
- (id)_appropriateProgressImage;
- (id)_appropriateTrackImage;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_defaultTrackColorForCurrentStyle;
- (id)_effectiveContentView;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_progressColor;
- (unsigned int)_roundedCornersForProgressForCurrentStyle;
- (unsigned int)_roundedCornersForTrackForCurrentStyle;
- (void)_setProgress:(float)arg1;
- (void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned int)arg4;
- (void)_setProgressColor:(id)arg1;
- (void)_setupProgressViewCommon;
- (BOOL)_shouldTintProgress;
- (BOOL)_shouldTintTrack;
- (void)_updateImages;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (int)barStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithProgressViewStyle:(int)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (id)observedProgress;
- (float)progress;
- (id)progressImage;
- (id)progressTintColor;
- (int)progressViewStyle;
- (void)setBarStyle:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setObservedProgress:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)setProgressImage:(id)arg1;
- (void)setProgressTintColor:(id)arg1;
- (void)setProgressViewStyle:(int)arg1;
- (void)setTrackImage:(id)arg1;
- (void)setTrackTintColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;
- (id)trackImage;
- (id)trackTintColor;

// Image: /System/Library/Frameworks/PassKit.framework/PassKit

- (void)pk_applyAppearance:(struct _PKAppearanceSpecifier { BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; unsigned char x28; unsigned int x29; long doublex30; void*x31; const void*x32; void*x33; in bool x34; long x35; void*x36; in double x37; void*x38; out double x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; in void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; id x113; in void*x114; void*x115; void*x116; void*x117; out void*x118; int x119; void*x120; double x121; void*x122; char *x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; unsigned char x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; bycopy unsigned short x180; void*x181; double x182; int x183; short x184; void*x185; void*x186; void*x187; BOOL x188; void*x189; void*x190; long long x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; short x212; const void*x213; long x214; int x215; unsigned int x216/* : ? */; void*x217; short x218; void*x219; short x220; void*x221; void*x222; void*x223; void*x224; long x225; int x226; unsigned int x227/* : ? */; double x228; int x229; short x230; void*x231; void*x232; void*x233; BOOL x234; void*x235; void*x236; double x237; void*x238; long x239; int x240; unsigned int x241/* : ? */; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; }*)arg1;
- (id)pk_childrenForAppearance;

@end
