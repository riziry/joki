-- phpMyAdmin SQL Dump
-- version 5.0.3
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Jan 01, 2021 at 05:57 PM
-- Server version: 10.4.14-MariaDB
-- PHP Version: 7.4.11

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `uas_basdat_19170`
--

-- --------------------------------------------------------

--
-- Table structure for table `goods`
--

CREATE TABLE `goods` (
  `GID` int(3) NOT NULL,
  `name` char(30) DEFAULT NULL,
  `price` int(7) DEFAULT NULL,
  `stock_left` int(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `goods`
--

INSERT INTO `goods` (`GID`, `name`, `price`, `stock_left`) VALUES
(1, 'Diecast car toys', 170000, 6),
(2, 'Phone E71 SUSA', 9700000, 3),
(3, 'glasses', 15000, 49),
(4, 'earphone', 55000, 15),
(5, 'tublr light', 100000, 32),
(6, 'Hand Watch', 450000, 5);

-- --------------------------------------------------------

--
-- Table structure for table `purchaseTransaction`
--

CREATE TABLE `purchaseTransaction` (
  `TID` int(3) NOT NULL,
  `userID` int(3) DEFAULT NULL,
  `goodsID` int(3) DEFAULT NULL,
  `purchaseDate` datetime DEFAULT NULL,
  `qlt` int(3) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `purchaseTransaction`
--

INSERT INTO `purchaseTransaction` (`TID`, `userID`, `goodsID`, `purchaseDate`, `qlt`) VALUES
(11, 101, 2, '2020-12-01 11:01:20', 1),
(12, 101, 3, '2020-12-03 23:49:30', 3),
(13, 101, 4, '2020-12-11 22:58:01', 1),
(14, 104, 6, '2020-11-29 13:30:29', 1),
(15, 107, 5, '2020-11-28 10:25:17', 2);

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `UID` int(3) NOT NULL,
  `firstName` char(20) DEFAULT NULL,
  `lastName` char(20) DEFAULT NULL,
  `gender` char(1) DEFAULT NULL,
  `addrs` varchar(30) DEFAULT NULL,
  `city` char(15) DEFAULT NULL,
  `state` char(15) DEFAULT NULL,
  `country` char(10) DEFAULT NULL,
  `postalCode` int(10) DEFAULT NULL,
  `phoneNumber` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`UID`, `firstName`, `lastName`, `gender`, `addrs`, `city`, `state`, `country`, `postalCode`, `phoneNumber`) VALUES
(101, 'Joe', 'Castle', 'M', '3500 browning lane', 'Corning', 'New York', 'USA', 14830, '1208556756\r'),
(102, 'Oliver', 'Bejah', 'M', '1109 Science center Dive', 'Boise', 'Idaho', 'USA', 83702, '1208575510\r'),
(103, 'Chan', 'He', 'F', '4367 Devils Hill Road', 'Jackson', 'Mississipi', 'USA', 39211, '1601843741\r'),
(104, 'Yimin', 'Cheng', 'F', 'jl. mantap jiwa no 9 kemayoran', 'Jakarta', 'Center Jakarta', 'Indonesia', 107415, '62873337432\r'),
(105, 'michael', 'Imam', 'M', 'jl. semangat no.3 cengkareng', 'Jakarta', 'West Jakarta', 'indonesia', 140145, '628139491823\r'),
(106, 'Zahidah', 'Kassis', 'F', 'Discesa Gaiola,18', 'Filiano', 'Potenza', 'Italy', 85020, '339650620\r'),
(107, 'Franziska', 'Wulf', 'F', 'Vicolo Cieco Fondachetto', 'Monteforte', 'Salerno', 'Italy', 84060, '339989982\r');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `goods`
--
ALTER TABLE `goods`
  ADD PRIMARY KEY (`GID`);

--
-- Indexes for table `purchaseTransaction`
--
ALTER TABLE `purchaseTransaction`
  ADD PRIMARY KEY (`TID`),
  ADD KEY `FK_userID` (`userID`),
  ADD KEY `FK_goodsID` (`goodsID`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`UID`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `purchaseTransaction`
--
ALTER TABLE `purchaseTransaction`
  ADD CONSTRAINT `FK_goodsID` FOREIGN KEY (`goodsID`) REFERENCES `goods` (`GID`),
  ADD CONSTRAINT `FK_userID` FOREIGN KEY (`userID`) REFERENCES `users` (`UID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
