-- phpMyAdmin SQL Dump
-- version 4.0.9
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generato il: Apr 03, 2017 alle 12:56
-- Versione del server: 5.5.34
-- Versione PHP: 5.4.22

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `galleriaarte`
--

-- --------------------------------------------------------

--
-- Struttura della tabella `quadri`
--

CREATE TABLE IF NOT EXISTS `quadri` (
  `titolo` varchar(30) NOT NULL,
  `codq` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `altezza` double unsigned NOT NULL,
  `larghezza` double unsigned NOT NULL,
  `codpittore` bigint(20) unsigned NOT NULL,
  PRIMARY KEY (`codq`),
  UNIQUE KEY `codq` (`codq`),
  KEY `codpittore` (`codpittore`),
  KEY `codpittore_2` (`codpittore`),
  KEY `larghezza` (`larghezza`),
  KEY `codpittore_3` (`codpittore`),
  KEY `altezza` (`altezza`),
  KEY `altezza_2` (`altezza`),
  KEY `titolo` (`titolo`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=3 ;

--
-- Dump dei dati per la tabella `quadri`
--

INSERT INTO `quadri` (`titolo`, `codq`, `altezza`, `larghezza`, `codpittore`) VALUES
('Guernica', 1, 400, 700, 2),
('ultima cena', 2, 511, 221, 3);

--
-- Limiti per le tabelle scaricate
--

--
-- Limiti per la tabella `quadri`
--
ALTER TABLE `quadri`
  ADD CONSTRAINT `quadri_ibfk_1` FOREIGN KEY (`codpittore`) REFERENCES `pittori` (`codPitt`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
