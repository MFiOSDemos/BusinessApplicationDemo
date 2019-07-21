//
//  AboutViewController.m
//  BusinessApplication
//
//  Created by chang on 21/07/2019.
//  Copyright © 2019 chang. All rights reserved.
//

#import "AboutViewController.h"

@interface AboutViewController ()

@end

@implementation AboutViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.button1.layer.cornerRadius = 5;
    
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)contactUs:(id)sender {
    
    [(UITabBarController *) self.tabBarController setSelectedIndex:4];
}

@end
